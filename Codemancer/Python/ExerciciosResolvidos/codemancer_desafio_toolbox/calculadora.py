"""Módulo de operações aritméticas e agregações."""
from typing import Iterable, Tuple

def somar(a: float, b: float) -> float:
    return a + b

def subtrair(a: float, b: float) -> float:
    return a - b

def multiplicar(a: float, b: float) -> float:
    return a * b

def dividir(a: float, b: float) -> float:
    if b == 0:
        raise ValueError("Divisão por zero não permitida.")
    return a / b

def media(*nums: float) -> float:
    if not nums:
        raise ValueError("Informe ao menos um número para média.")
    return sum(nums) / len(nums)

def maior_menor(nums: Iterable[float]) -> Tuple[float, float]:
    lista = list(nums)
    if not lista:
        raise ValueError("Coleção vazia.")
    return max(lista), min(lista)
