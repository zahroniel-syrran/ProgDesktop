"""Utilitários de I/O, menu e parsing para a Codemancer Toolbox."""
from typing import Callable, Iterable, List

def ler_float(msg: str) -> float:
    while True:
        try:
            return float(input(msg))
        except ValueError:
            print("Valor inválido. Tente novamente.")

def ler_int(msg: str) -> int:
    while True:
        try:
            return int(input(msg))
        except ValueError:
            print("Valor inválido. Tente novamente.")

def ler_lista_float(prompt: str = "Números separados por espaço: ") -> List[float]:
    while True:
        try:
            entrada = input(prompt)
            return [float(x.replace(",", ".")) for x in entrada.split()]
        except ValueError:
            print("Algum valor não é numérico. Tente novamente.")

def menu(opcoes: list[str], titulo: str = "Menu") -> int:
    print(f"\n=== {titulo} ===")
    for i, texto in enumerate(opcoes, start=1):
        print(f"{i}) {texto}")
    print("0) Voltar")
    while True:
        es = input("Escolha: ").strip()
        if es == "0":
            return 0
        if es.isdigit() and 1 <= int(es) <= len(opcoes):
            return int(es)
        print("Opção inválida.")
