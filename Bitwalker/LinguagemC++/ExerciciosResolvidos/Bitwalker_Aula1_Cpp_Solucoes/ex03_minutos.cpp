
#include <iostream>
int main() {
    int minutos;
    std::cout << "Minutos: ";
    std::cin >> minutos;
    int horas = minutos / 60;   // divisao inteira
    int resto = minutos % 60;   // modulo
    std::cout << horas << "h" << resto << "\n";
    return 0;
}
