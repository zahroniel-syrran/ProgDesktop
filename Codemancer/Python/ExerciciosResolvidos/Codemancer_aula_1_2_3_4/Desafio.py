# 🌟 Desafio do Codemancer
# Crie um programa que peça ao usuário sua idade e informe:
#  Menor de 12 anos → “Você é uma criança.”
#  Entre 12 e 17 anos → “Você é um adolescente.”
#  Entre 18 e 59 anos → “Você é um adulto.”
#  60 anos ou mais → “Você é um idoso.”

idade = int(input("Digite sua idade: "))

if idade < 12:
    print("Você é uma criança.")
elif idade <= 17:
    print("Você é um adolescente.")
elif idade <= 59:
    print("Você é um adulto.")
else:
    print("Você é um idoso.")

# 👉 Estrutura de faixas usando elif.