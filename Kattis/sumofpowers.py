"""
Problem: Sum of Powers
URL: https://open.kattis.com/problems/sumofpowers
Language: Python
Author: dvchinx
"""

import sys
k, n, *xs = map(int, sys.stdin.read().split())
print(sum(k**x for x in xs))