"""Utilidades de string simples (português)."""
import re

VOGAIS = set("aeiouáéíóúâêôàãõAEIOUÁÉÍÓÚÂÊÔÀÃÕ")

def contar_vogais(texto: str) -> int:
    return sum(1 for ch in texto if ch in VOGAIS)

def eh_palindromo(texto: str) -> bool:
    normal = re.sub(r"\s+", "", texto).lower()
    return normal == normal[::-1]

def slugificar(texto: str) -> str:
    t = texto.lower().strip()
    t = re.sub(r"\s+", "-", t)
    t = re.sub(r"[^a-z0-9\-]", "", t)
    t = re.sub(r"-{2,}", "-", t)
    return t.strip("-")
