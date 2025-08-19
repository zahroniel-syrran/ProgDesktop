# Codemancer Toolbox — Aula 6 (Projeto Integrador)

Mini‑suite didática em Python com foco em **condições, laços, funções, escopo e módulos**.
Inclui atalhos por linha de comando e menus interativos.

## Estrutura
```
codemancer_toolbox_aula6/
├─ app.py               # ponto de entrada (menu + atalhos por argv)
├─ utils.py             # utilitários (leitura segura, menu)
├─ calculadora.py       # operações aritméticas e agregações
├─ conversores.py       # conversões (temperatura, distância)
└─ strings_util.py      # utilidades de string
```

## Requisitos
- Python 3.10+

## Como executar (menu)
```bash
python app.py
```

## Atalhos por argumentos
```bash
python app.py c2f 30           # Celsius -> Fahrenheit
python app.py f2c 86           # Fahrenheit -> Celsius
python app.py km2mi 10         # Km -> Milhas
python app.py mi2km 6.2        # Milhas -> Km
python app.py soma 2 3         # Somar 2 + 3
python app.py media 7 8 9 10   # Média de n valores
python app.py slug "Olá Mundo!"# Slugificar texto
```
