import sys
import math
import bisect
from sys import stdin, stdout
from math import gcd, floor, sqrt, log
from collections import defaultdict as dd
from itertools import permutations
from bisect import bisect_left as bl, bisect_right as br
from functools import lru_cache

sys.setrecursionlimit(100000000)

int_r = lambda: int(sys.stdin.readline())
str_r = lambda: sys.stdin.readline().strip()
intList_r = lambda: list(map(int, sys.stdin.readline().strip().split()))
strList_r = lambda: list(sys.stdin.readline().strip())
jn = lambda x, l: x.join(map(str, l))
mul = lambda: map(int, sys.stdin.readline().strip().split())
mulf = lambda: map(float, sys.stdin.readline().strip().split())
ceil = lambda x: int(x) if (x == int(x)) else int(x) + 1
ceildiv = lambda x, d: x // d if (x % d == 0) else x // d + 1
flush = lambda: stdout.flush()
outStr = lambda x: stdout.write(str(x))
mod = 1000000007


def main():
    n, m, k = intList_r()
    need = intList_r()
    apps = intList_r()
    need = sorted(need)
    apps = sorted(apps)
    i = 0
    j = 0
    ans = 0
    # print(need, apps)
    while i < len(need) and j < len(apps):
        # print(need[i], apps[j])
        if abs(need[i] - apps[j]) <= k:

            ans += 1
            i += 1
            j += 1
        elif need[i] > apps[j]:
            j += 1
        elif need[i] < apps[j]:
            i += 1
    outStr(ans)


if __name__ == "__main__":
    main()