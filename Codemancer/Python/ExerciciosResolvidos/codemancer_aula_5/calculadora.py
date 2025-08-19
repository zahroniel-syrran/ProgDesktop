"""Módulo de operações aritméticas básicas e utilitários."""

from typing import Iterable, Tuple

def somar(a: float, b: float) -> float:
    """Retorna a soma de a e b."""
    return a + b

def subtrair(a: float, b: float) -> float:
    """Retorna a diferença a - b."""
    return a - b

def multiplicar(a: float, b: float) -> float:
    """Retorna o produto de a e b."""
    return a * b

def dividir(a: float, b: float) -> float:
    """Retorna a divisão a / b. Lança ValueError se b == 0."""
    if b == 0:
        raise ValueError("Divisão por zero não permitida.")
    return a / b

def media(*nums: float) -> float:
    """Retorna a média aritmética de uma sequência de números."""
    if not nums:
        raise ValueError("Forneça ao menos um número para calcular a média.")
    return sum(nums) / len(nums)

def maior_menor(nums: Iterable[float]) -> Tuple[float, float]:
    """Retorna uma tupla (maior, menor) dos valores em nums."""
    lista = list(nums)
    if not lista:
        raise ValueError("Coleção vazia.")
    return max(lista), min(lista)
