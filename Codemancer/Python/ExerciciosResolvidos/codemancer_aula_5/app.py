"""Aplicação principal integrando calculadora, strings_util e tarefas."""

import calculadora as calc
import strings_util as su
import tarefas as t

def ler_float(msg: str) -> float:
    while True:
        try:
            return float(input(msg))
        except ValueError:
            print("Valor inválido. Tente novamente.")

def ler_lista_float() -> list[float]:
    print("Digite números separados por espaço:")
    while True:
        try:
            entrada = input("> ")
            return [float(x) for x in entrada.replace(",", ".").split()]
        except ValueError:
            print("Algum valor não é numérico. Tente novamente.")

# --- Menus ---
def menu_calculadora():
    while True:
        print("\n=== Calculadora ===")
        print("1) Somar")
        print("2) Subtrair")
        print("3) Multiplicar")
        print("4) Dividir")
        print("5) Média")
        print("6) Maior/Menor")
        print("0) Voltar")
        op = input("Escolha: ").strip()
        if op == "0": break
        try:
            if op == "1":
                a, b = ler_float("a: "), ler_float("b: ")
                print("Resultado:", calc.somar(a, b))
            elif op == "2":
                a, b = ler_float("a: "), ler_float("b: ")
                print("Resultado:", calc.subtrair(a, b))
            elif op == "3":
                a, b = ler_float("a: "), ler_float("b: ")
                print("Resultado:", calc.multiplicar(a, b))
            elif op == "4":
                a, b = ler_float("a: "), ler_float("b: ")
                print("Resultado:", calc.dividir(a, b))
            elif op == "5":
                nums = ler_lista_float()
                print("Média:", calc.media(*nums))
            elif op == "6":
                nums = ler_lista_float()
                maior, menor = calc.maior_menor(nums)
                print(f"Maior: {maior} | Menor: {menor}")
        except Exception as e:
            print("Erro:", e)

def menu_strings():
    while True:
        print("\n=== Strings Util ===")
        print("1) Contar vogais")
        print("2) Verificar palíndromo")
        print("3) Slugificar")
        print("0) Voltar")
        op = input("Escolha: ").strip()
        if op == "0": break
        txt = input("Texto: ")
        if op == "1":
            print("Vogais:", su.contar_vogais(txt))
        elif op == "2":
            print("É palíndromo?", su.eh_palindromo(txt))
        elif op == "3":
            print("Slug:", su.slugificar(txt))

def menu_tarefas():
    lista: list[str] = []
    while True:
        print("\n=== Tarefas ===")
        print("1) Adicionar")
        print("2) Listar")
        print("3) Remover")
        print("0) Voltar")
        op = input("Escolha: ").strip()
        if op == "0": break
        elif op == "1":
            tarefa = input("Nova tarefa: ").strip()
            if tarefa:
                lista = t.adicionar(lista, tarefa)
        elif op == "2":
            t.listar(lista)
        elif op == "3":
            try:
                idx = int(input("Número da tarefa: "))
                lista = t.remover(lista, idx)
            except Exception as e:
                print("Erro:", e)

def main():
    while True:
        print("\n=== Codemancer Toolbox ===")
        print("1) Calculadora")
        print("2) Strings Util")
        print("3) Tarefas")
        print("0) Sair")
        op = input("Escolha: ").strip()
        if op == "0":
            print("Até a próxima!")
            break
        elif op == "1":
            menu_calculadora()
        elif op == "2":
            menu_strings()
        elif op == "3":
            menu_tarefas()
        else:
            print("Opção inválida.")

if __name__ == "__main__":
    main()
