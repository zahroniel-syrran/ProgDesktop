# 🎮 Projeto: Jogo da Forca (Versão inicial)

## 📌 Objetivo

Criar um jogo simples da forca em **C++** usando **vetores de `char`
(C-strings)** para armazenar palavras.\
O jogador deve tentar adivinhar a palavra secreta, uma letra por vez.

------------------------------------------------------------------------

## 📝 Passos a seguir

### 1. Preparar o ambiente

Incluir bibliotecas necessárias: - `<iostream>` para entrada e saída. -
`<cstdlib>` e `<ctime>` para sorteio. - `<cstring>` para manipulação de
C-strings (`strcpy`, `strlen`, etc.).

### 2. Definir banco de palavras

Usar um vetor bidimensional para armazenar até 5 palavras.\
Cada palavra será o nome de um personagem do **Universo Zaion**:

    "zaion"
    "leo"
    "ryo"
    "kael"
    "zeta"

Exemplo em C++:

``` cpp
char banco[5][20] = {"zaion", "leo", "ryo", "kael", "zeta"};
```

### 3. Escolher palavra secreta

-   Sortear um índice entre 0 e 4.
-   Copiar a palavra escolhida para outra variável usando `strcpy`.

### 4. Preparar a máscara

-   Criar um vetor de `char` do mesmo tamanho da palavra secreta.
-   Preencher com `_` em cada posição da letra.

Exemplo: palavra = `"zaion"` → máscara inicial = `"_____"`.

### 5. Configurar tentativas

Definir número máximo de erros (ex.: `6`).

### 6. Loop do jogo

1.  Mostrar a máscara atual ao jogador.\
2.  Ler um **chute** (uma letra).\
3.  Verificar se a letra existe na palavra:
    -   Se **sim**, revelar todas as posições correspondentes.\
    -   Se **não**, reduzir uma tentativa.

### 7. Condições de parada

-   Se o jogador completar a palavra → **vitória**.\
-   Se acabar o número de tentativas → **derrota**.

### 8. Fim de rodada

-   Mostrar a palavra secreta.\
-   Perguntar se deseja jogar novamente (usar `strcmp` para comparar
    resposta `"sim"`).

------------------------------------------------------------------------

## 📘 Conceitos trabalhados

-   Vetores de `char` (**C-strings**).\
-   Funções da biblioteca `<cstring>`:
    -   `strcpy()` → copiar palavra sorteada para variável de trabalho.\
    -   `strlen()` → contar letras da palavra.\
    -   `strcmp()` → comparar respostas do jogador (`sim`/`nao`).\
-   Estruturas de controle: `for`, `while`, `if`.\
-   Organização de dados em **vetores indexados**.

------------------------------------------------------------------------

## 🚀 Desafio proposto

1.  Implementar o jogo básico da forca com as 5 palavras fornecidas.\
2.  Permitir que o jogador erre até 5 vezes.\
3.  Contar acertos e erros.\
4.  Melhorar a experiência mostrando letras já usadas.

------------------------------------------------------------------------

## 📘 Exemplo do Jogo (Versão monolítica)

```
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

int main(int argc, char** argv) {
	
	int zNumeroSorteado,zTotalLetras,zQtdAcerto,zQtdErro;
	bool zAchou; //Tipo logico. Valore possiveis: true e false (Verdadeiro e Falso)
	char zPalavras[10][30]={"Zaion", "Alin", "Zeta", "Leo", "Zahroniel", "Darian", "kael","Marcos","Rita","Beta"};
	char zPalavraSorteada [30], zMascara[30], zPalpite;
	
	
	srand(time(NULL));
	
	while (true){
	
		zNumeroSorteado = rand() %10;
		strcpy (zPalavraSorteada, zPalavras[zNumeroSorteado]);
		zTotalLetras = strlen (zPalavraSorteada);
		
		// Criando a mascara "-----"
		for (int i = 0; i < zTotalLetras;i++){
			zMascara [i]='-';
			
		}
		//Colocando o finalizador na Mascara, para nao mostrar lixo
		zMascara [zTotalLetras]='\0';
		zQtdAcerto=0;
		zQtdErro=0;
		while (true){		
			std::cout << zPalavraSorteada << "\n";
			std::cout << "\n\nJogo da Forca\n\n";
			std::cout << "Palavra: "<<zMascara<<"\n\n";
			std::cout << "Voce errou: "<<zQtdErro<<" vezes (Max: 5 vezes). Boa sorte!";
			std::cout << "\n\nQual e a letra: ";
			std::cin>>zPalpite;
			std::cin.ignore (); // Ignora o enter
			zAchou=false;
			//Procurando a letra
			for (int i = 0; i < zTotalLetras;i++){
				//tranforma a letra da palavra em maiuscula antes de comparar
				if (std::toupper(zPalavraSorteada [i])== std::toupper(zPalpite)){
					//se acertou, revela a leta
					zMascara[i]=zPalavraSorteada[i];
					//Conta os acertos
					zQtdAcerto++;
					zAchou=true;
				}	
			}
			//Se nao achou, conta erro. O  " ! "  significa nao.
			if (!zAchou) zQtdErro++;
			// Verifica se terminou as letras ou se atingiu o maximo de erro
			if ((zQtdAcerto == zTotalLetras)||(zQtdErro==5)){
				break;
			}		
		}
		// Escreve se errou ou acertou
		if (zQtdAcerto == zTotalLetras){
				std::cout << "\n Parabens voce acertou";
		} else {
				std::cout << "\n que pena voce errou";
				
				
				
			}
			
		// Pergunta se deseja continuar
        char zOpc;
        std::cout << "\nDeseja jogar novamente? (S/N): ";
        std::cin >> zOpc;

        // Normaliza e decide
        zOpc = std::toupper(zOpc);
        if (zOpc != 'S') {
            std::cout << "\nEncerrando. Obrigado por jogar!\n";
            break;
        }
    }
	return 0;
}
```
