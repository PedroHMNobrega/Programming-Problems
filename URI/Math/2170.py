#Juros do Projeto
#Assunto: Regra de 3;
from sys import stdin
cnt = 1
for line in stdin:
    a, b = map(float, line.split())
    dif = b - a
    ans = dif*100 / a
    print("Projeto %d:" % cnt)
    print("Percentual dos juros da aplicacao: %.2f %%\n" % ans)
    cnt += 1
