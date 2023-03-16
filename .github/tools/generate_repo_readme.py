#!/usr/bin/env python3

import os
import lib.settings
from lib.Scoreboard import *
import datetime
import time

scoreboard = Scoreboard(
    problems_yaml_filepath=os.path.join(lib.settings.PROJECT_ROOT, "problems.yml"),
    members_yaml_filepath=os.path.join(lib.settings.PROJECT_ROOT, "members.yml"))
readme_filepath = os.path.join(lib.settings.PROJECT_ROOT, "README.md")
today = datetime.date.today()

open(readme_filepath, "w", encoding="utf8").write(f"""\
# CSUMB Programming Team SPR23

Share your solutions with the Programming Team and earn points!

- Solve a Trivial problem: 1 pt
- Solve an Easy problem: 2 pt
- Solve a Medium problem: 6 pt
- Solve a Hard Problem: 20 pt
- Solve an Advanced Problem: 75 pt

### ✨ Weekly Scoreboard ✨
{scoreboard.display(
    timestamp_start=time.mktime((today - datetime.timedelta(days=today.weekday()+2)).timetuple()),
    timestamp_end=None,
    max_rows=5)}

### 🏁 Overall Scoreboard 🏁
{scoreboard.display()}
""")
