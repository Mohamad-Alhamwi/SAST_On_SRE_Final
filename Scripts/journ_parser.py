#!/usr/bin/env python3

import re
import sys
from collections import Counter

log_file = sys.argv[1]
bugs = []

with open(log_file, "r") as logs:
    for line in logs:
        match = re.search(r"Result:\s*[^:]+:\s*(.*?):", line)

        if match:
            bugs.append(match.group(1))

bug_types = Counter(bugs)

print("\nErrors List:\n")

max_len = max(len(bug) for bug in bug_types)

for bug, count in bug_types.items():
    print(f"{bug:<{max_len}} : {count}")