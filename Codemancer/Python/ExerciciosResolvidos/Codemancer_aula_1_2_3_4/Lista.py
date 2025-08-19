# Busca em lista:
# Crie uma lista com 5 nomes. Peça ao usuário um nome e verifique se está na lista.
#   ◦ Se encontrar, mostre “Nome encontrado!” e interrompa o laço.
#   ◦ Se não encontrar, percorra até o final e mostre “Nome não encontrado.”


nomes = ["Ana", "Pedro", "Maria", "Lucas", "Bianca"]
alvo = input("Digite um nome para buscar: ")

encontrado = False
for nome in nomes:
    if nome.lower() == alvo.lower():
        print("Nome encontrado!")
        encontrado = True
        break

if not encontrado:
    print("Nome não encontrado.")
