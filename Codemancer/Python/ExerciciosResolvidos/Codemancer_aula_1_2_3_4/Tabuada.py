# Tabuada personalizada: Peça ao usuário um número e mostre sua tabuada de 1 a 10 usando for.

n = int(input("Digite um número: "))

for i in range(1, 11):
    print(n, "x", i, "=", n * i)
