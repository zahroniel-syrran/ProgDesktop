# Menu de opções: Crie um menu com 3 opções (ex: mostrar uma mensagem, calcular algo, sair) usando while.

opcao = 0

while opcao != 3:
    print("\nMenu")
    print("1 - Mostrar mensagem")
    print("2 - Calcular 5 + 5")
    print("3 - Sair")
    
    opcao = int(input("Escolha uma opção: "))

    if opcao == 1:
        print("Olá, seja bem-vindo!")
    elif opcao == 2:
        print("5 + 5 =", 5 + 5)
    elif opcao == 3:
        print("Saindo do programa...")
    else:
        print("Opção inválida. Tente novamente.")
