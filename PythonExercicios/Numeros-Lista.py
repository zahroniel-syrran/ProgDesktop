# 🧩 Exercício – Análise de Números (versão aprimorada)
# Desenvolvido por: Zahy (Zahroniel Syrran)
# Data: 10-11-2025

# O programa deve:
# - Ler 15 números inteiros (sem repetir)
# - Exibir em ordem crescente
# - Mostrar o maior, o menor, a soma e a média
# - Contar quantos são pares e quantos são ímpares

numeros = []  # Lista para armazenar os números

# Leitura dos 15 números
while len(numeros) < 15:
    try:
        n = int(input(f"Digite o {len(numeros)+1}º número: "))
        if n in numeros:
            print("⚠️ Número repetido! Digite outro valor.")
        else:
            numeros.append(n)
    except ValueError:
        print("❌ Entrada inválida! Digite um número inteiro.")

# Ordena a lista
numeros.sort()

# Calcula informações solicitadas
maior = max(numeros)
menor = min(numeros)
soma = sum(numeros)
media = soma / len(numeros)

pares = 0
impares = 0

for n in numeros:
    if n % 2 == 0:
        pares += 1
    else:
        impares += 1

# Exibe os resultados
print("\n--- Resultados ---")
print("Números em ordem crescente:", numeros)
print("Maior número:", maior)
print("Menor número:", menor)
print("Soma dos números:", soma)
print(f"Média: {media:.2f}")
print("Quantidade de números pares:", pares)
print("Quantidade de números ímpares:", impares)
