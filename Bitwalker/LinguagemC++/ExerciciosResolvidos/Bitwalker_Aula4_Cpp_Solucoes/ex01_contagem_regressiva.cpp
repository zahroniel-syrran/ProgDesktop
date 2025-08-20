
#include <iostream>
int main() {
    int n;
    std::cout << "n (>=0): ";
    std::cin >> n;
    if (n < 0) { std::cout << "Valor invalido.\n"; return 0; }
    for (int i = n; i >= 0; --i) {
        std::cout << i;
        if (i > 0) std::cout << ", ";
    }
    std::cout << "\n";
    return 0;
}
