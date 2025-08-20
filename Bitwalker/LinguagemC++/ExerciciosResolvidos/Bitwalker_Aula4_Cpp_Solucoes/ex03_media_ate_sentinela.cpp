
#include <iostream>
#include <iomanip>
int main() {
    std::cout << "Digite valores (fim: -1)\n";
    double x;
    long long qtd = 0;
    double soma = 0.0;
    while (true) {
        std::cin >> x;
        if (!std::cin) { std::cout << "Entrada invalida. Encerrando.\n"; return 0; }
        if (x == -1.0) break;
        if (x >= 0.0) { soma += x; ++qtd; } // ignora negativos (exceto sentinela)
    }
    std::cout << std::fixed << std::setprecision(2);
    if (qtd == 0) std::cout << "Nenhum valor valido.\n";
    else std::cout << "Media = " << (soma / qtd) << "\n";
    return 0;
}
