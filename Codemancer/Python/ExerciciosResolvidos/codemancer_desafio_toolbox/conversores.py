"""Conversões comuns de unidades."""

def c_para_f(c: float) -> float:
    return (c * 9/5) + 32

def f_para_c(f: float) -> float:
    return (f - 32) * 5/9

def km_para_milhas(km: float) -> float:
    return km * 0.621371

def milhas_para_km(mi: float) -> float:
    return mi / 0.621371
