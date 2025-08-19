# 🌟 Desafio do Codemancer
# Crie um mini sistema de funções com as seguintes opções:
#    •  1 → Calcular área do retângulo
#    •  2 → Converter Celsius para Fahrenheit
#    •  3 → Calcular a média de 3 notas
#    •  4 → Sair
# 👉 Cada funcionalidade deve estar em uma função separada.
# 👉 O menu principal deve usar while + if/elif para chamar as funções.

def area_retangulo(base: float, altura: float) -> float:
    """Calcula a área de um retângulo."""
    return base * altura

def c_para_f(c: float) -> float:
    """Converte Celsius para Fahrenheit."""
    return (c * 9/5) + 32

def media3(n1: float, n2: float, n3: float) -> float:
    """Retorna a média aritmética de três notas."""
    return (n1 + n2 + n3) / 3

def situacao_por_media(media: float) -> str:
    """Classifica a situação do aluno com base na média."""
    if media >= 7:
        return "Aprovado"
    elif media >= 5:
        return "Recuperação"
    else:
        return "Reprovado"

def menu():
    while True:
        print("\n=== Mini Sistema Codemancer ===")
        print("1) Área do retângulo")
        print("2) Celsius → Fahrenheit")
        print("3) Média de 3 notas")
        print("4) Sair")

        try:
            opc = int(input("Escolha uma opção: "))
        except ValueError:
            print("Entrada inválida. Digite um número de 1 a 4.")
            continue

        if opc == 1:
            try:
                b = float(input("Base: "))
                h = float(input("Altura: "))
                print(f"Área = {area_retangulo(b, h)}")
            except ValueError:
                print("Valores numéricos inválidos.")
        elif opc == 2:
            try:
                c = float(input("Temperatura em °C: "))
                print(f"{c} °C = {c_para_f(c)} °F")
            except ValueError:
                print("Valor numérico inválido.")
        elif opc == 3:
            try:
                n1 = float(input("Nota 1: "))
                n2 = float(input("Nota 2: "))
                n3 = float(input("Nota 3: "))
                m = media3(n1, n2, n3)
                print(f"Média = {m:.2f} → {situacao_por_media(m)}")
            except ValueError:
                print("Notas inválidas.")
        elif opc == 4:
            print("Saindo... Até a próxima!")
            break
        else:
            print("Opção inválida. Tente novamente.")

# Para executar o menu, descomente:
# menu()
