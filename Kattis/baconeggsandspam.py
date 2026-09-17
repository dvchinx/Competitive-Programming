"""
Problem: Bacon, Eggs, and Spam
URL: https://open.kattis.com/problems/baconeggsandspam
Language: Python
Author: dvchinx
"""

import sys

def main():
    lines = sys.stdin.read().split("\n")
    idx = 0
    out = []

    while True:
        n = int(lines[idx]); idx += 1
        if n == 0:
            break

        report = {}
        for _ in range(n):
            parts = lines[idx].split(); idx += 1
            name, foods = parts[0], parts[1:]
            for food in foods:
                report.setdefault(food, set()).add(name)

        for food in sorted(report):
            out.append(food + " " + " ".join(sorted(report[food])))
        out.append("")

    print("\n".join(out))


if __name__ == "__main__":
    main()
