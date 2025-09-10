#!/usr/bin/env python3

import re
import sys
from collections import defaultdict

log_file = sys.argv[1]

bug_info = defaultdict(lambda: {"count": 0, "risk": None, "category": None})

final_results = False

with open(log_file, "r") as logs:
    for line in logs:
        if "FINAL RESULTS:" in line:
            final_results = True
            continue
        
        if final_results:
            match = re.search(r"\[([0-9]+)\]\s+\(([^)]+)\)\s+([a-zA-Z_][a-zA-Z0-9_]*)\:$", line)

            if match:
                risk = match.group(1)
                category = match.group(2)
                bugtype = match.group(3)
                
                bug_info[bugtype]["count"] += 1
                bug_info[bugtype]["risk"] = risk
                bug_info[bugtype]["category"] = category

        if "ANALYSIS SUMMARY:" in line:
            break

print("\nErrors List:\n")

if not bug_info:
    print("No bugs found.")
    
else:
    max_len = max(len(bug) for bug in bug_info)
    for bug, data in bug_info.items():
        print(f"{bug:<{max_len}} | count: {data['count']} | risk: {data['risk']} | category: {data['category']}")
