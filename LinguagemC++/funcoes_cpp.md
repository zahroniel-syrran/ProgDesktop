# 📘 Funções em C++ (visão rápida)

**O que são?**\
Funções são blocos de código com um nome, que você pode chamar sempre
que precisar daquela tarefa. Ajudam a **reutilizar código**,
**organizar** o programa e **evitar repetição**.

**Sintaxe geral:**

``` cpp
tipo_de_retorno nome(parâmetros) {
    // corpo
    return valor; // se o tipo de retorno não for void
}
```

**Parâmetros:** - **Por valor** (cópia): alterações dentro da função
**não** afetam o argumento original.\
`int soma(int a, int b);` - **Por referência** (`&`): a função recebe um
"apelido" para a variável original; alterações **afetam** o original.\
`void dobrar(int& n);` - **Const referência** (`const T&`): eficiente
para objetos grandes e **protege contra alterações**.\
`void imprime(const std::string& s);`

**Outros pontos úteis:** - **Protótipo** (declaração) permite definir a
função **depois** do `main`.\
- **Sobrecarga**: várias funções com o **mesmo nome**, mas parâmetros
diferentes.\
`int area(int lado);` e `int area(int base, int altura);` - **Boas
práticas**: nomes claros, funções curtas, uma responsabilidade por
função.

------------------------------------------------------------------------

# 🧪 Exemplo pequeno + explicação linha a linha

## Código

``` cpp
#include <iostream>

// Função que soma dois inteiros (passagem por valor)
int soma(int a, int b) {
    return a + b;
}

// Função que dobra um número (passagem por referência)
void dobrar(int& n) {
    n = n * 2;
}

int main() {
    int x, y;

    std::cout << "Digite dois inteiros: ";
    std::cin >> x >> y;

    int s = soma(x, y);
    std::cout << x << " + " << y << " = " << s << "\n";

    dobrar(x);
    std::cout << "Depois de dobrar, x = " << x << "\n";

    return 0;
}
```

## Explicação linha a linha (objetiva)

-   `#include <iostream>`\
    Importa recursos de entrada/saída (`std::cout`, `std::cin`).
-   `int soma(int a, int b) { return a + b; }`\
    Declara e **define** a função `soma`: recebe dois inteiros **por
    valor** e devolve a soma.
-   `void dobrar(int& n) { n = n * 2; }`\
    Declara e define `dobrar`: recebe `n` **por referência** (`&`),
    altera o original multiplicando por 2.
-   `int main() { ... }`\
    Função principal do programa (ponto de entrada).
-   `int x, y;`\
    Declara duas variáveis inteiras para armazenar os números digitados.
-   `std::cout << "Digite dois inteiros: ";`\
    Escreve um prompt na tela.
-   `std::cin >> x >> y;`\
    Lê dois inteiros do usuário e guarda em `x` e `y`.
-   `int s = soma(x, y);`\
    Chama a função `soma` e guarda o resultado em `s`.
-   `std::cout << x << " + " << y << " = " << s << "\n";`\
    Exibe a expressão e o resultado da soma.
-   `dobrar(x);`\
    Chama `dobrar` **passando `x` por referência**; `x` é modificado
    dentro da função.
-   `std::cout << "Depois de dobrar, x = " << x << "\n";`\
    Mostra o novo valor de `x` (já dobrado).
-   `return 0;`\
    Finaliza o programa com sucesso.

------------------------------------------------------------------------

## 👉 Dica extra

Se você quiser **declarar** (protótipo) antes e **definir** depois, pode
fazer assim:

``` cpp
#include <iostream>

int soma(int a, int b);   // protótipo
void dobrar(int& n);      // protótipo

int main() { /* ... */ }

int soma(int a, int b) { return a + b; }
void dobrar(int& n) { n *= 2; }
```
