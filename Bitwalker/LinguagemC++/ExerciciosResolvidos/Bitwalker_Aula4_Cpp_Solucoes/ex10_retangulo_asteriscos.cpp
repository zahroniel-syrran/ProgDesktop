
#include <iostream>
int main() {
    int largura, altura;
    std::cout << "Largura e altura: ";
    std::cin >> largura >> altura;
    if (largura <= 0 || altura <= 0) { std::cout << "Dimensoes invalidas.\n"; return 0; }
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) std::cout << '*';
        std::cout << '\n';
    }
    return 0;
}
