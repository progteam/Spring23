import yaml

class Member:
    def __init__(self, rank_title, rank_title_id, content):
        self.rank_title = rank_title
        self.rank_title_id = rank_title_id
        self.name = content["name"]
        self.github = content["github"]

def load_members_from_yaml(yaml_filepath: str):
    with open(yaml_filepath, "r") as file:
        content = yaml.safe_load(file)
        rank_ids = dict(zip(content["ranks"], range(len(content["ranks"]))))
        res = []
        for rank, members in content["members"].items():
            for member in members:
                res.append(Member(rank, rank_ids[rank], member))
        return res, content["ranks"]
