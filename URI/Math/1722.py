f = [0 for e in range(550)]
f[1] = 1
f[2] = 2
for i in range(3, 550):
    f[i] = f[i-1] + f[i-2]

while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0: break
    start = False
    cnt = 0
    for i in range(1, 550):
        v = f[i]
        if v > b: break
        if v >= a: start = True
        if(start): cnt += 1
    print(cnt)
