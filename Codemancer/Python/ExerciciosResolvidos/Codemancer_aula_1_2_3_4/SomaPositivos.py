# Soma de números positivos (while):
# O programa deve ler números até que o usuário digite um número negativo.
# No final, mostre a soma dos números positivos digitados.


soma = 0

while True:
    n = int(input("Digite um número (negativo para encerrar): "))
    if n < 0:
        break
    if n > 0:
        soma += n

print("Soma dos positivos digitados:", soma)
