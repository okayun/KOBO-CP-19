# -*- coding: utf-8 -*-
import math

for t in range(int(input())):
    n = int(input())
    print(sum([ i + (n // i if n // i < n and n // i != i else 0) for i in range(1, int(math.sqrt(n)) + 1) if n != 1 and n % i == 0 ]))