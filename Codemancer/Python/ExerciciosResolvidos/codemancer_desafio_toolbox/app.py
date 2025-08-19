"""Ponto de entrada da Codemancer Toolbox (menu principal + atalho por argumentos)."""
from __future__ import annotations
import sys
import calculadora as calc
import conversores as conv
import strings_util as su
from utils import ler_float, ler_int, ler_lista_float, menu

# ---- Submenus ----
def submenu_calculadora() -> None:
    while True:
        op = menu(
            ["Somar (a + b)", "Subtrair (a - b)", "Multiplicar (a * b)",
             "Dividir (a / b)", "Média (vários)", "Maior/Menor (vários)"],
            "Calculadora"
        )
        if op == 0:
            return
        try:
            if op in (1, 2, 3, 4):
                a = ler_float("a: ")
                b = ler_float("b: ")
                if op == 1:
                    print("Resultado:", calc.somar(a, b))
                elif op == 2:
                    print("Resultado:", calc.subtrair(a, b))
                elif op == 3:
                    print("Resultado:", calc.multiplicar(a, b))
                elif op == 4:
                    print("Resultado:", calc.dividir(a, b))
            elif op == 5:
                nums = ler_lista_float()
                print("Média:", calc.media(*nums))
            elif op == 6:
                nums = ler_lista_float()
                maior, menor = calc.maior_menor(nums)
                print(f"Maior: {maior} | Menor: {menor}")
        except Exception as e:
            print("Erro:", e)

def submenu_conversores() -> None:
    while True:
        op = menu(
            ["Celsius → Fahrenheit", "Fahrenheit → Celsius", "Km → Milhas", "Milhas → Km"],
            "Conversores"
        )
        if op == 0:
            return
        try:
            if op == 1:
                c = ler_float("°C: ")
                print("°F =", conv.c_para_f(c))
            elif op == 2:
                f = ler_float("°F: ")
                print("°C =", conv.f_para_c(f))
            elif op == 3:
                km = ler_float("Km: ")
                print("Milhas =", conv.km_para_milhas(km))
            elif op == 4:
                mi = ler_float("Milhas: ")
                print("Km =", conv.milhas_para_km(mi))
        except Exception as e:
            print("Erro:", e)

def submenu_strings() -> None:
    while True:
        op = menu(
            ["Contar vogais", "Verificar palíndromo", "Slugificar texto"],
            "Strings Util"
        )
        if op == 0:
            return
        txt = input("Texto: ")
        if op == 1:
            print("Vogais:", su.contar_vogais(txt))
        elif op == 2:
            print("É palíndromo?", su.eh_palindromo(txt))
        elif op == 3:
            print("Slug:", su.slugificar(txt))

# ---- Execução direta por argumentos (atalhos) ----
def executar_por_argv(argv: list[str]) -> bool:
    """Executa ação direta via argumentos. Retorna True se executou algo."""
    if len(argv) < 2:
        return False
    cmd = argv[1].lower()
    try:
        if cmd == "c2f" and len(argv) == 3:
            print(conv.c_para_f(float(argv[2])))
        elif cmd == "f2c" and len(argv) == 3:
            print(conv.f_para_c(float(argv[2])))
        elif cmd == "km2mi" and len(argv) == 3:
            print(conv.km_para_milhas(float(argv[2])))
        elif cmd == "mi2km" and len(argv) == 3:
            print(conv.milhas_para_km(float(argv[2])))
        elif cmd == "soma" and len(argv) == 4:
            print(calc.somar(float(argv[2]), float(argv[3])))
        else:
            return False
    except ValueError:
        print("Argumentos inválidos.")
    return True

def main() -> None:
    # Atalho por argumentos (se houver)
    if executar_por_argv(sys.argv):
        return
    # Menu principal
    while True:
        op = menu(["Calculadora", "Conversores", "Strings"], "Codemancer Toolbox")
        if op == 0:
            print("Até a próxima!")
            return
        if op == 1:
            submenu_calculadora()
        elif op == 2:
            submenu_conversores()
        elif op == 3:
            submenu_strings()

if __name__ == "__main__":
    main()
