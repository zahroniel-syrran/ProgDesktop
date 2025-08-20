
#include <iostream>
#include <iomanip>
int main() {
    double preco;
    std::cout << "Preco do produto: ";
    std::cin >> preco;

    double imposto;
    if (preco < 100) imposto = preco * 0.05;
    else if (preco < 500) imposto = preco * 0.10;
    else imposto = preco * 0.15;

    double final = preco + imposto;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Imposto = " << imposto << "\n";
    std::cout << "Preco final = " << final << "\n";
    return 0;
}
