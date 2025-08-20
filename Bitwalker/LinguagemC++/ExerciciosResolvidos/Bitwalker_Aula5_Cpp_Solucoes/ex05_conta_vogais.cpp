
#include <iostream>
#include <string>
#include <cctype>

int contaVogais(const std::string& s) {
    int c = 0;
    for (unsigned char ch : s) {
        char l = static_cast<char>(std::tolower(ch));
        if (l=='a' || l=='e' || l=='i' || l=='o' || l=='u') ++c;
    }
    return c;
}

int main() {
    std::string s;
    std::cout << "Digite um texto curto (sem espacos para simplificar o exemplo): ";
    std::cin >> s;
    std::cout << "Vogais = " << contaVogais(s) << "\n";
    return 0;
}
