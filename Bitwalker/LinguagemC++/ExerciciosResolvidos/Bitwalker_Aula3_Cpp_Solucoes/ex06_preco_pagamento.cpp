
#include <iostream>
#include <iomanip>
#include <string>
int main() {
    double preco;
    std::string pagamento;
    std::cout << "Preco do produto: ";
    std::cin >> preco;
    std::cout << "Tipo de pagamento (avista/prazo): ";
    std::cin >> pagamento;

    double final = preco;
    if (pagamento == "avista") {
        final = preco * 0.92; // 8% desconto
        std::cout << "Pagamento a vista com desconto.\n";
    } else if (pagamento == "prazo") {
        final = preco * 1.05; // 5% acrescimo
        std::cout << "Pagamento a prazo com acrescimo.\n";
    } else {
        std::cout << "Tipo de pagamento invalido.\n";
        return 0;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor final = " << final << "\n";
    return 0;
}
