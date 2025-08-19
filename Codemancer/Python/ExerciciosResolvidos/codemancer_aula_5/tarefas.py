"""Gerenciador simples de tarefas em memória (lista)."""
from typing import List

def adicionar(tarefas: List[str], tarefa: str) -> List[str]:
    """Retorna nova lista com a tarefa adicionada."""
    return tarefas + [tarefa]

def listar(tarefas: List[str]) -> None:
    """Imprime tarefas numeradas."""
    if not tarefas:
        print("Lista vazia.")
        return
    for i, t in enumerate(tarefas, start=1):
        print(f"{i}. {t}")

def remover(tarefas: List[str], indice: int) -> List[str]:
    """Remove tarefa pelo índice 1-based. Retorna nova lista."""
    if indice < 1 or indice > len(tarefas):
        raise IndexError("Índice inválido.")
    return [t for i, t in enumerate(tarefas, start=1) if i != indice]
