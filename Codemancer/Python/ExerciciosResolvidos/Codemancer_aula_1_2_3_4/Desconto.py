# Desconto em loja: Se a compra for maior ou igual a R$100,00, dê 10% de desconto. Caso contrário, preço normal.

valor = float(input("Digite o valor da compra: R$ "))

if valor >= 100:
    valor_final = valor * 0.9   # aplica 10% de desconto
    print("Você ganhou 10% de desconto. Valor final: R$", valor_final)
else:
    print("Valor final: R$", valor)

# 👉 Multiplicamos por 0.9 para aplicar 10% de desconto.