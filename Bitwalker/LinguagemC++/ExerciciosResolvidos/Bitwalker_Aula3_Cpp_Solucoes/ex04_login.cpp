
#include <iostream>
#include <string>
int main() {
    std::string usuario, senha;
    std::cout << "Usuario: ";
    std::cin >> usuario;
    std::cout << "Senha: ";
    std::cin >> senha;

    if (usuario == "admin" && senha == "1234") {
        std::cout << "Acesso permitido\n";
    } else {
        std::cout << "Acesso negado\n";
    }
    return 0;
}
