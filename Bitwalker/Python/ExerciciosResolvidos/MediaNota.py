# Peça duas notas de um aluno, calcule a média e diga se ele foi aprovado (média ≥ 6).

n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))

media = (n1 + n2) / 2
print("Média:", media)
print("Aprovado?", media >= 6)
