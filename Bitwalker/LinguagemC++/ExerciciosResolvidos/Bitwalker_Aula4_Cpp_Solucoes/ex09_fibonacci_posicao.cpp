
#include <iostream>
int main() {
    long long n;
    std::cout << "n (>=1): ";
    std::cin >> n;
    if (n < 1) { std::cout << "Invalido.\n"; return 0; }
    if (n == 1) { std::cout << 0 << "\n"; return 0; }
    if (n == 2) { std::cout << 1 << "\n"; return 0; }
    long long a = 0, b = 1;
    for (long long i = 3; i <= n; ++i) {
        long long prox = a + b;
        a = b;
        b = prox;
    }
    std::cout << b << "\n";
    return 0;
}
