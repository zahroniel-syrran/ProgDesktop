# Menu interativo:
# Monte um menu com 3 opções:
#   ◦ Mostrar “Bem-vindo”
#   ◦ Mostrar tabuada de um número escolhido
#   ◦ Sair



while True:
    print("\n=== Menu ===")
    print("1 - Mostrar 'Bem-vindo'")
    print("2 - Tabuada de um número")
    print("3 - Sair")

    try:
        opc = int(input("Escolha uma opção: "))
    except ValueError:
        print("Digite um número válido.")
        continue

    if opc == 1:
        print("Bem-vindo!")
    elif opc == 2:
        try:
            n = int(input("Digite um número para ver a tabuada: "))
        except ValueError:
            print("Número inválido.")
            continue
        for i in range(1, 11):
            print(f"{n} x {i} = {n*i}")
    elif opc == 3:
        print("Saindo...")
        break
    else:
        print("Opção inválida.")
