
#include <iostream>
int main() {
    int n;
    std::cout << "Quantos inteiros? ";
    std::cin >> n;
    long long soma = 0;
    int qtd = 0;
    for (int i = 1; i <= n; ++i) {
        long long v;
        std::cout << "Valor " << i << ": ";
        std::cin >> v;
        if (v % 2 == 0) { soma += v; ++qtd; }
    }
    std::cout << "Soma dos pares = " << soma << "\n";
    std::cout << "Quantidade de pares = " << qtd << "\n";
    return 0;
}
