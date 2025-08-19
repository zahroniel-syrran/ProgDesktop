# Maior de dois números:
# Crie uma função que receba dois números e retorne o maior deles.


def maior(a: float, b: float):
    """Retorna o maior entre dois números. Se iguais, retorna ambos e um aviso."""
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return a  # ou b (são iguais)

# Exemplo:
# print(maior(10, 3))   # 10
# print(maior(5, 5))    # 5
