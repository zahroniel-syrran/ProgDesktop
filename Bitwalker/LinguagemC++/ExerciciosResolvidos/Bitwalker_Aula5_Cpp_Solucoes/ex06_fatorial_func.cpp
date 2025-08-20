
#include <iostream>

unsigned long long fat(int n) {
    if (n < 0) return 0ULL; // sinaliza invalido neste exemplo
    unsigned long long r = 1ULL;
    for (int i = 2; i <= n; ++i) r *= (unsigned long long)i;
    return r;
}

int main() {
    int n;
    std::cout << "n: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Invalido\n";
    } else {
        std::cout << n << "! = " << fat(n) << "\n";
    }
    return 0;
}
