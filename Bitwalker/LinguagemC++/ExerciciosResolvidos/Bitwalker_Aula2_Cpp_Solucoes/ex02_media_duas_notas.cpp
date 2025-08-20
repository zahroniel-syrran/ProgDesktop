
#include <iostream>
#include <iomanip>
int main() {
    double n1, n2;
    std::cout << "Digite duas notas: ";
    std::cin >> n1 >> n2;
    double media = (n1 + n2) / 2.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Media = " << media << "\n";
    return 0;
}
