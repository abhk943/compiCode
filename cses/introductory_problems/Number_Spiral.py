import sys
import math
import bisect
from sys import stdin, stdout
from math import gcd, floor, sqrt, log
from collections import defaultdict as dd
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
    testcases = int_r()
    for t_c in range(testcases):
        y, x = intList_r()
        boolx = x & 1
        booly = y & 1
        if x > y:
            xval = 0
            if boolx:
                xval = x ** 2
                xval -= y - 1
            else:
                xval = (x - 1) ** 2 + 1
                xval += y - 1
            outStr("{}\n".format(xval))
        else:
            yval = 0
            if booly:
                yval = (y - 1) ** 2 + 1
                yval += x - 1
            else:
                yval = y ** 2
                yval -= x - 1
            outStr("{}\n".format(yval))


if __name__ == "__main__":
    main()