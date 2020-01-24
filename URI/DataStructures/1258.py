n = int(input())
while n != 0:
    ordem = {'branco' : {'P' : [], 'M' : [], 'G' : []}, 'vermelho' : {'P' : [], 'M' : [], 'G' : []}}

    for ent in range(n):
        nome = input()
        cor, tam = map(str, input().split())
        ordem[cor][tam].append(nome)
        ordem[cor][tam].sort()

    for e in ordem:
        for v in ordem[e]:
            if len(ordem[e][v]) > 0:
                for w in ordem[e][v]:
                    print(e, v, w)
    print()
    n = int(input())
