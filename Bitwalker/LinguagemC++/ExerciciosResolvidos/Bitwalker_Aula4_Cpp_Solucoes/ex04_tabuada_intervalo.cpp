
#include <iostream>
int main() {
    int a, b;
    std::cout << "Intervalo [a b] (a <= b): ";
    std::cin >> a >> b;
    if (a > b) { std::cout << "Intervalo invalido.\n"; return 0; }
    for (int k = a; k <= b; ++k) {
        std::cout << "== Tabuada de " << k << " ==\n";
        for (int i = 0; i <= 10; ++i) {
            std::cout << k << " x " << i << " = " << (k * i) << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}
