# Feira de Bactérias
# Comparar potências usando log
from math import log10
n = int(input())
maxI = 0
maxNum = 0
for bac in range(n):
    d, c = map(int, input().split())
    exp = c * log10(d)
    if exp > maxNum:
        maxNum = exp
        maxI = bac

print(maxI)
