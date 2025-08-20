
#include <iostream>
int main() {
    unsigned long long n;
    std::cout << "Inteiro nao negativo: ";
    std::cin >> n;
    int digitos = 1;
    unsigned long long x = n;
    while (x >= 10) { x /= 10; ++digitos; }
    std::cout << "Digitos: " << digitos << "\n";
    return 0;
}
