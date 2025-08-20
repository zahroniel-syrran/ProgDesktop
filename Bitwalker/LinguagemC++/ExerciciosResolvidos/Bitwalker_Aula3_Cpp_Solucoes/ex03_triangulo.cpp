
#include <iostream>
int main() {
    double a, b, c;
    std::cout << "Digite os tres lados: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            std::cout << "Equilatero\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Isosceles\n";
        } else {
            std::cout << "Escaleno\n";
        }
    } else {
        std::cout << "Nao formam triangulo\n";
    }
    return 0;
}
