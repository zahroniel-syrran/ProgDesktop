# Faça um programa que leia a altura e o peso de uma pessoa e calcule o IMC:
# IMC = peso / (altura * altura)

peso = float(input("Peso (kg): "))
altura = float(input("Altura (m): "))

imc = peso / (altura ** 2)
print(f"Seu IMC é {imc:.2f}")




