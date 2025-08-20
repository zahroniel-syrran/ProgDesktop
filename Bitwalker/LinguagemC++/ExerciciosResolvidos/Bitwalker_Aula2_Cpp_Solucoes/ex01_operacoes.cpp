
#include <iostream>
int main() {
    int a, b;
    std::cout << "Digite dois inteiros (a b): ";
    std::cin >> a >> b;

    std::cout << "Soma: " << (a + b) << "\n";
    std::cout << "Subtracao: " << (a - b) << "\n";
    std::cout << "Multiplicacao: " << (a * b) << "\n";

    if (b != 0) {
        std::cout << "Divisao inteira: " << (a / b) << "\n";
        std::cout << "Resto: " << (a % b) << "\n";
    } else {
        std::cout << "Divisao inteira: indefinida (divisao por zero)\n";
        std::cout << "Resto: indefinido (divisao por zero)\n";
    }
    return 0;
}
