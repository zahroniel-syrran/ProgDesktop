# Faça um programa que converta um valor em reais (R$) para dólares (US$).
# (Dica: peça o valor em reais e a cotação do dólar)

reais = float(input("Valor em reais (R$): "))
cotacao = float(input("Cotação do dólar (R$/US$): "))

dolares = reais / cotacao
print(f"US$: {dolares:.2f}")

