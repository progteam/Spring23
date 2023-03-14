#!/usr/bin/env python3

import os
import lib.settings
from lib.Problem import load_problems_from_yaml

for problem in load_problems_from_yaml(os.path.join(lib.settings.PROJECT_ROOT, "problems.yml")):
    problem.gen_readme()
