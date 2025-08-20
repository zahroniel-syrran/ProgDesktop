
#include <iostream>
#include <string>
#include <cctype>

void capitaliza(std::string& s) {
    if (s.empty()) return;
    // coloca tudo em minusculo (ASCII)
    for (char& ch : s) ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    // primeira letra em maiusculo se for alfabetica
    s[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(s[0])));
}

int main() {
    std::string s;
    std::cout << "Digite um nome (sem espacos para simplificar o exemplo): ";
    std::cin >> s;
    capitaliza(s);
    std::cout << s << "\n";
    return 0;
}
