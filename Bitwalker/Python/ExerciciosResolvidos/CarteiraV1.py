# Pergunte se a pessoa tem mais de 18 anos e se possui carteira de motorista. Mostre Pode dirigir ou  Não pode dirigir.

idade = int(input("Digite sua idade: "))
tem_carteira = input("Possui CNH? (s/n): ") == "s"

print("Pode dirigir?", (idade >= 18) and tem_carteira)