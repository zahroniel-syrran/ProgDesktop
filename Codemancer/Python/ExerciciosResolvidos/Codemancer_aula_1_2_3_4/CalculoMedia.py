# Cálculo de média:
# Crie uma função que receba 3 notas e retorne a média.
#    ◦ Se a média ≥ 7, retorne “Aprovado”
#    ◦ Se 5 ≤ média < 7, retorne “Recuperação”
#    ◦ Se < 5, retorne “Reprovado”

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

# Exemplo:
# m = media3(7.5, 6.0, 8.0)
# print(m, situacao_por_media(m))
