# Contagem regressiva: Peça um número e faça a contagem regressiva até 0, mostrando “Fim!” no final.

n = int(input("Digite um número para a contagem regressiva: "))

while n >= 0:
    print(n)
    n -= 1

print("Fim!")
