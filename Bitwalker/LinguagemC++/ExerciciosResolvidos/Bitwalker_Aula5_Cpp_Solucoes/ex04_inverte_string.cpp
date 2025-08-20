
#include <iostream>
#include <string>
#include <utility>

void inverte(std::string& s) {
    int i = 0, j = (int)s.size() - 1;
    while (i < j) {
        std::swap(s[i], s[j]);
        ++i; --j;
    }
}

int main() {
    std::string s;
    std::cout << "Digite uma palavra (sem espacos para simplificar o exemplo): ";
    std::cin >> s;
    inverte(s);
    std::cout << s << "\n";
    return 0;
}
