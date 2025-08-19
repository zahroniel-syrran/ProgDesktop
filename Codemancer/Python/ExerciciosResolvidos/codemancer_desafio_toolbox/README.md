# Codemancer Toolbox — Modelo de Projeto (Aula 6)

Mini‑suite didática em Python com foco em **funções**, **módulos**, **menus** e **organização de código**.

## Estrutura
```
codemancer_toolbox/
├─ app.py               # ponto de entrada com menu principal
├─ utils.py             # utilitários (leitura segura, menu, validações)
├─ calculadora.py       # operações aritméticas
├─ conversores.py       # conversões comuns (temperatura, distância)
└─ strings_util.py      # utilidades de string
```

## Requisitos
- Python 3.10+

## Como executar
```bash
python app.py
```

## Acesso rápido por argumentos (opcional)
Execute uma ação direta sem abrir o menu:
```bash
python app.py c2f 30         # Celsius -> Fahrenheit
python app.py f2c 86         # Fahrenheit -> Celsius
python app.py km2mi 10       # Km -> Milhas
python app.py mi2km 6.2      # Milhas -> Km
python app.py soma 2 3       # Somar 2 + 3
```
