# Pular múltiplos de 3 (for):
# De 1 a 15, pule os números que são múltiplos de 3 (use continue).


for i in range(1, 16):
    if i % 3 == 0:
        continue  # pula múltiplos de 3
    print(i)

