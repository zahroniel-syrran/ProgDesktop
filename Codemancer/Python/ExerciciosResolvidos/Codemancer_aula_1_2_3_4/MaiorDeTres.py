# Maior de três números: Leia três números e mostre qual é o maior.

a = int(input("Digite o primeiro número: "))
b = int(input("Digite o segundo número: "))
c = int(input("Digite o terceiro número: "))

if a >= b and a >= c:
    print("O maior número é:", a)
elif b >= a and b >= c:
    print("O maior número é:", b)
else:
    print("O maior número é:", c)

# 👉 Usamos condições encadeadas para comparar.