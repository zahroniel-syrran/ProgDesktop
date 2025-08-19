# Par ou ímpar:Peça ao usuário um número e diga se ele é par ou ímpar.

numero = int(input("Digite um número: "))

if numero % 2 == 0:
    print("O número é par.")
else:
    print("O número é ímpar.")

# 👉 Aqui usamos o operador % (módulo) para verificar o resto da divisão por 2.
