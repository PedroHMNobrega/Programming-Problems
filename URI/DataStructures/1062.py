#Trilhos: 
while True:
    n = int(input())
    if n == 0: break

    vag = list(map(int, input().split()))
    while vag[0] != 0:
        cnt = n
        pilha = []
        i = n - 1
        while i >= 0:
            if vag[i] == cnt:
                cnt -= 1
                i -= 1
            elif len(pilha) != 0 and pilha[-1] == cnt:
                pilha.pop()
                cnt -= 1
            else:
                pilha.append(vag[i]) 
                i -= 1
  
        if cnt > 0:
            while len(pilha) > 0 and cnt == pilha[-1]:
                cnt -= 1
                pilha.pop()

        if len(pilha) == 0:
            print('Yes')
        else:
            print('No')
        
        vag = list(map(int, input().split()))
    print()
