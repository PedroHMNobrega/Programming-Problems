#Ordenação por Tamanho:
#Assunto: Ordenação
n = int(input())
for test in range(n):
    palavras = list(map(str, input().split()))
    palavras.sort(key = lambda x: len(x), reverse = True)
    print(*palavras)
