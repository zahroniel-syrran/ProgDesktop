# 🌟 Desafio do Codemancer
# Crie um jogo da adivinhação:
#    • O programa escolhe um número secreto (ex: 7).
#    • O usuário deve tentar adivinhar.
#    • A cada tentativa, o programa responde:
#        ◦ “Maior que o número secreto.”
#        ◦ “Menor que o número secreto.”
#        ◦ “Acertou!” e o jogo termina.

import random

secreto = random.randint(1, 100)  # número secreto entre 1 e 100
tentativas = 0

print("Adivinhe o número secreto entre 1 e 100!")

while True:
    try:
        palpite = int(input("Seu palpite: "))
    except ValueError:
        print("Digite um número inteiro.")
        continue

    tentativas += 1

    if palpite < secreto:
        print("Maior que o número secreto.")
    elif palpite > secreto:
        print("Menor que o número secreto.")
    else:
        print(f"Acertou! O número era {secreto}. Tentativas: {tentativas}")
        break
