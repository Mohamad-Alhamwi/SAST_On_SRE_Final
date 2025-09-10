#!/usr/bin/env python3

import os
import glob
from collections import defaultdict

def check_coverage(base_dir="."):
    # Collect all source files
    c_files = glob.glob(os.path.join(base_dir, "*.c"))
    cpp_files = glob.glob(os.path.join(base_dir, "*.cpp"))
    sources = c_files + cpp_files

    # Collect all .out files
    outs = glob.glob(os.path.join(base_dir, "*.out"))

    # Build mapping: which .out covers which sources
    out_map = defaultdict(list)
    for out in outs:
        base = out.replace(".out", "")
        # Wildcard match like Makefile does: foo.out -> fooa.c, foob.c, etc.
        matched = glob.glob(base + "*.c") + glob.glob(base + "*.cpp")
        out_map[out] = matched

    # Flatten all covered sources
    covered = set()
    for matched in out_map.values():
        covered.update(matched)

    # Compare sets
    uncovered = set(sources) - covered

    # Print results
    print(f"Total source files: {len(sources)}")
    print(f"Total executables (.out): {len(outs)}")
    print(f"Covered sources: {len(covered)}")
    print(f"Uncovered sources: {len(uncovered)}\n")

    if uncovered:
        print("⚠️ Uncovered source files:")
        for f in sorted(uncovered):
            print("   ", f)
    else:
        print("✅ All source files are covered by some .out")

    # Optional: show mapping
    print("\nMapping of .out to source files:")
    for out, matched in sorted(out_map.items()):
        print(f"{out}:")
        for m in matched:
            print(f"   {m}")
        print()

if __name__ == "__main__":
    # Run in current dir; adjust path to a CWE folder if needed
    check_coverage(".")
