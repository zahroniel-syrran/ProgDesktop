
#include <iostream>
int main() {
    int n;
    std::cout << "Quantos valores? ";
    std::cin >> n;
    if (n <= 0) { std::cout << "Nada a processar.\n"; return 0; }
    long long v;
    std::cout << "Valor 1: ";
    std::cin >> v;
    long long menor = v, maior = v;
    for (int i = 2; i <= n; ++i) {
        std::cout << "Valor " << i << ": ";
        std::cin >> v;
        if (v < menor) menor = v;
        if (v > maior) maior = v;
    }
    std::cout << "Menor = " << menor << "\n";
    std::cout << "Maior = " << maior << "\n";
    return 0;
}
