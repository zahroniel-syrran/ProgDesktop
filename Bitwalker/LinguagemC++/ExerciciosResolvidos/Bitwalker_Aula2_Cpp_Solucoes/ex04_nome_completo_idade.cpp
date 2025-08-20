
#include <iostream>
#include <string>
int main() {
    std::string nomeCompleto;
    int idade;

    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nomeCompleto);
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Ola, " << nomeCompleto << ", voce tem " << idade << " anos.\n";
    return 0;
}
