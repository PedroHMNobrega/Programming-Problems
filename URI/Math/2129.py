f = [-1 for e in range(1000005)]
f[1] = 1
f[2] = 2
for i in range(3, 1000003): 
    f[i] = i * f[i-1]
print(f[1000000])
