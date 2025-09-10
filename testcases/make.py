#!/usr/bin/env python3

import os
import subprocess
import multiprocessing

def run_make(path, nproc):
    """Run make individuals in the given path"""
    print(f"🔥 Building individuals in {path} ...")
    try:
        subprocess.run(
            ["make", f"-j{nproc}", "individuals"],
            cwd=path,
            check=True
        )
        print(f"✅ Done with {path}\n")
    except subprocess.CalledProcessError as e:
        print(f"❌ Failed in {path}: {e}\n")

def build_all(base_dir="."):
    nproc = multiprocessing.cpu_count()

    for cwe_dir in sorted(os.listdir(base_dir)):
        cwe_path = os.path.join(base_dir, cwe_dir)
        if os.path.isdir(cwe_path) and cwe_dir.startswith("CWE-"):
            # Try CWE-level Makefile first
            run_make(cwe_path, nproc)

            # Then dive into subfolders like s01, s02...
            for sub in sorted(os.listdir(cwe_path)):
                sub_path = os.path.join(cwe_path, sub)
                if os.path.isdir(sub_path) and sub.startswith("s"):
                    run_make(sub_path, nproc)

    print("🎯 All CWE testcases attempted with 'make individuals'")

if __name__ == "__main__":
    build_all(".")
