"""Funções utilitárias para manipulação de strings (português simplificado)."""
import re

VOGAIS = set("aeiouáéíóúâêôàãõAEIOUÁÉÍÓÚÂÊÔÀÃÕ")

def contar_vogais(texto: str) -> int:
    """Conta vogais em texto (considera acentos comuns)."""
    return sum(1 for ch in texto if ch in VOGAIS)

def eh_palindromo(texto: str) -> bool:
    """Verifica se texto é palíndromo ignorando espaços e caixa."""
    normal = re.sub(r"\s+", "", texto).lower()
    return normal == normal[::-1]

def slugificar(texto: str) -> str:
    """Gera um slug básico: minúsculas, espaços -> '-', remove não alfanumérico/-. """
    t = texto.lower().strip()
    t = re.sub(r"\s+", "-", t)
    t = re.sub(r"[^a-z0-9\-]", "", t)
    t = re.sub(r"-{2,}", "-", t)
    return t.strip("-")
