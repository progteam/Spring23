import yaml
import os
from . import settings
import pathlib

class Problem:
    def __init__(self, difficulty, point, content):
        self.difficulty = difficulty
        self.point = point
        self.path = os.path.join(settings.PROJECT_ROOT, content["path"])
        self.link = content["link"]
        self.problem_name = self.path.split("/")[-1]

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
