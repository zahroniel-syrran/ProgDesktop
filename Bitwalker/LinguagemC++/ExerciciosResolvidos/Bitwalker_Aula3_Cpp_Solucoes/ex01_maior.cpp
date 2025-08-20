
#include <iostream>
int main() {
    int a, b;
    std::cout << "Digite dois inteiros: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "Maior: " << a << "\n";
    } else if (b > a) {
        std::cout << "Maior: " << b << "\n";
    } else {
        std::cout << "Os numeros sao iguais.\n";
    }
    return 0;
}
