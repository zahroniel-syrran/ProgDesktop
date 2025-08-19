# Peça 3 notas de um aluno, calcule a média e exiba o resultado com 2 casas decimais.

n1 = float(input("Digite a primeira nota: "))
n2 = float(input("Digite a segunda nota: "))
n3 = float(input("Digite a terceira nota: "))

media = (n1 + n2 + n3) / 3
print(f"Média: {media:.2f}")
