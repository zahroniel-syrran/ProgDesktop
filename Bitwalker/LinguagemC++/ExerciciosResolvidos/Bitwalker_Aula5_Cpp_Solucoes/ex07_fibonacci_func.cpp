
#include <iostream>

unsigned long long fib(int n) {
    if (n < 0) return 0ULL;
    if (n == 0) return 0ULL;
    if (n == 1) return 1ULL;
    unsigned long long a = 0ULL, b = 1ULL;
    for (int i = 2; i <= n; ++i) {
        unsigned long long nx = a + b;
        a = b;
        b = nx;
    }
    return b;
}

int main() {
    int n;
    std::cout << "n (>=0): ";
    std::cin >> n;
    if (n < 0) std::cout << "Invalido\n";
    else std::cout << "fib(" << n << ") = " << fib(n) << "\n";
    return 0;
}
