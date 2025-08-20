
#include <iostream>
#include <iomanip>
int main() {
    long long n;
    std::cout << "Numero de termos (n >= 1): ";
    std::cin >> n;
    if (n <= 0) { std::cout << "n invalido.\n"; return 0; }
    long double soma = 0.0L;
    long double sinal = 1.0L;
    for (long long k = 0; k < n; ++k) {
        soma += sinal / (2.0L * k + 1.0L);
        sinal = -sinal;
    }
    long double pi = 4.0L * soma;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "pi ~= " << static_cast<double>(pi) << "\n";
    return 0;
}
