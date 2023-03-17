import yaml
import os
from . import settings
import pathlib
from glob import glob
import subprocess

class Problem:
    def __init__(self, difficulty, point, content):
        self.difficulty = difficulty
        self.point = point
        self.path = os.path.join(settings.PROJECT_ROOT, content["path"])
        self.link = content["link"]
        self.problem_name = self.path.split("/")[-1]
    
    # Return Git authors who created non .md files in the problem dir (and its
    # creation timestamp)
    def get_solution_details(self):
        res = {}
        for file in glob(os.path.join(self.path, "*[!.md]")):
            p1 = subprocess.Popen(["git", "log", "--reverse", "--format='%al %ct'", file], stdout=subprocess.PIPE)
            p2 = subprocess.Popen(["head", "-1"], stdin=p1.stdout, stdout=subprocess.PIPE)
            log = p2.communicate()[0].decode("utf-8")[1:-2]
            author, timestamp = log.split()
            author = author.split('+')[-1]
            res[author] = min(int(timestamp), res[author] if author in res else float('inf'))
        return res

    def gen_readme(self):
        pathlib.Path(self.path).mkdir(parents=True, exist_ok=True)
        open(os.path.join(self.path, "README.md"), "w").write(f"""\
# [{self.problem_name}]({self.link})
- Difficulty: {self.difficulty} ({self.point} pt)
        """)


def load_problems_from_yaml(yaml_filepath: str):
    with open(yaml_filepath, "r") as file:
        content = yaml.safe_load(file)
        points = content["points"]
        res = []
        for difficulty, problems in content["problems"].items():
            point = points[difficulty]
            for problem in problems:
                res.append(Problem(difficulty, point, problem))
        return res
