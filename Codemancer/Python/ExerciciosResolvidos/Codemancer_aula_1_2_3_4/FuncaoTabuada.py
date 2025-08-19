# Tabuada em função:
# Crie uma função que receba um número e mostre sua tabuada de 1 a 10.

def tabuada(n: int) -> None:
    """Imprime a tabuada de 1 a 10 do número informado."""
    for i in range(1, 11):
        print(f"{n} x {i} = {n * i}")

# Exemplo:
# tabuada(7)
