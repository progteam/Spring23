from collections import defaultdict
from .Problem import *
from .Member import *

class Scoreboard:
    def __init__(self, problems_yaml_filepath, members_yaml_filepath):
        self.problems = load_problems_from_yaml(problems_yaml_filepath)
        self.members, self.ranks = load_members_from_yaml(members_yaml_filepath)

    def display(self, timestamp_start=None, timestamp_end=None, max_rows=None):
        points = defaultdict(lambda: 0)
        time_pen = defaultdict(lambda: 0)
        for problem in self.problems:
            for author, timestamp in problem.get_solution_details().items():
                if timestamp_start is not None and timestamp < timestamp_start:
                    continue
                if timestamp_end is not None and timestamp > timestamp_end:
                    continue
                points[author] += problem.point
                time_pen[author] += timestamp

        sorted_members = sorted(self.members, key=lambda m: (-points[m.github], time_pen[m.github]))
        members_by_rank = defaultdict(lambda: [])
        rows = 0
        for member in sorted_members:
            ranks = members_by_rank[member.rank_title_id]
            if max_rows is not None and len(ranks) >= max_rows:
                continue
            if points[member.github] == 0:
                continue
            ranks.append(member)
            rows = max(rows, len(ranks))

        def make_row(cols):
            cols = [str(col) for col in cols]
            return "|" + "|".join(cols) + "|"

        def get_rank_emoji(rank):
            if rank == 0:
                return "🥇"
            if rank == 1:
                return "🥈"
            if rank == 2:
                return "🥉"
            return str(rank+1)

        table_rows = []
        for i in range(rows):
            cols = [get_rank_emoji(i)]
            for j in range(len(self.ranks)):
                members = members_by_rank[j]
                cols.append(members[i].name if i < len(members) else " ")
                cols.append(points[members[i].github] if i < len(members) else " ")
            table_rows.append(make_row(cols))

        table_header = [' ']
        for rank in self.ranks:
            table_header.append(rank.capitalize())
            table_header.append("Points")

        table_rows = "\n".join(table_rows)
        return f"""\
{make_row(table_header)}
{make_row(["-------"]*len(table_header))}
{table_rows}"""
