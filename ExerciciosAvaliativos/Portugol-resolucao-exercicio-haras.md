# Resolução dos Exercícios - Modelo

## 1️⃣ Enunciado
O **Haras Cavalos Brilhantes** compra cavalos com frequência.  
Ler a quantidade de cavalos adquiridos recentemente, calcular a quantidade de ferraduras necessárias para os novos cavalos e exibir:

- Quantidade de novos cavalos  
- Quantidade de ferraduras necessárias

---

## 📝 Desenvolvimento do Programa

### Considerações:
1. **Quantidade de cavalos** deve ser maior que zero. Caso seja zero ou negativa, emitir a mensagem:  
   > A quantidade de cavalos deve ser maior que zero!  
   e finalizar o programa.
2. Cavalos e ferraduras são números **inteiros**.
3. **Cálculo:**
   ```
   ferraduras = cavalos × 4
   ```
   Estrutura lógica:
   ```
   se (cavalos > 0) {
       calcular
       exibir
   } senao {
       emitir sinal de erro
   }
   ```

---

## 💻 Layout da Tela

### ✅ Situação Normal (*happy hour*):
```
Cálculo de Ferraduras para o Haras Cavalos Brilhantes

Qual a quantidade de Cavalos: 3

Foram adquiridos 3 novos cavalos e o número de ferraduras é 12.
```

### ⚠️ Situação de Erro (*exceção*):
```
Cálculo de Ferraduras para o Haras Cavalos Brilhantes

Qual a quantidade de Cavalos: -2

A quantidade de Cavalos deve ser maior que zero!
```

---

## 📜 Código em Portugol

```portugol
programa {
    funcao inicio () {

        inteiro cavalos, ferraduras

        escreva("Cálculo de Ferraduras para o Haras Cavalos Brilhantes\n\n")
        escreva("Qual a quantidade de Cavalos: ")
        leia(cavalos)

        se (cavalos > 0) {
            ferraduras = cavalos * 4
            escreva("Foram adquiridos ", cavalos, " novos cavalos e o número de ferraduras é ", ferraduras)
        } senao {
            escreva("A quantidade de Cavalos deve ser maior que zero!")
        }
    }
}
```

