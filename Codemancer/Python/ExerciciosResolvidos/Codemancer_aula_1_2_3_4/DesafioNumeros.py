# 🌟 Desafio do Codemancer
#     Crie um programa que peça números ao usuário até que ele digite 0.
#     No final, mostre a soma e a quantidade de números digitados (excluindo o 0).

soma = 0
quantidade = 0

while True:
    numero = int(input("Digite um número (0 para sair): "))
    if numero == 0:
        break
    soma += numero
    quantidade += 1

print("Você digitou", quantidade, "números.")
print("A soma deles é:", soma)


#  👉 Aqui usamos while True com break para sair quando o usuário digita 0.