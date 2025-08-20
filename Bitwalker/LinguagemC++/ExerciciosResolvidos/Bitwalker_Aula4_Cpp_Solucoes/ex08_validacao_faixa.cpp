
#include <iostream>
int main() {
    int x;
    while (true) {
        std::cout << "Digite um inteiro entre 1 e 100: ";
        std::cin >> x;
        if (x >= 1 && x <= 100) break;
        std::cout << "Valor fora da faixa. Tente novamente.\n";
    }
    std::cout << "Valor aceito: " << x << "\n";
    return 0;
}
