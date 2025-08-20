
#include <iostream>
int main() {
    int x;
    std::cout << "Digite um valor inteiro: ";
    std::cin >> x;

    if ((x >= 10 && x <= 20) || (x >= 30 && x <= 40)) {
        std::cout << "Dentro de ao menos um intervalo\n";
    } else {
        std::cout << "Fora dos intervalos\n";
    }
    return 0;
}
