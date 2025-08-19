# Soma de 5 números (while): Leia 5 números digitados pelo usuário e mostre a soma deles.


contador = 0
soma = 0

while contador < 5:
    numero = int(input("Digite um número: "))
    soma += numero
    contador += 1

print("A soma dos números é:", soma)
