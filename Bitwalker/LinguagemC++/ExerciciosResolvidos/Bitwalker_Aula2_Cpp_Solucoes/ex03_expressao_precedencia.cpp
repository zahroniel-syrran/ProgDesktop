
#include <iostream>
#include <iomanip>
int main() {
    double a, b, c;
    std::cout << "Digite a, b, c: ";
    std::cin >> a >> b >> c;

    double e1 = (a + b) * c;
    double e2 = a + b * c;
    double dif = e1 - e2;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "(a+b)*c = " << e1 << "\n";
    std::cout << "a+b*c   = " << e2 << "\n";
    std::cout << "Diferenca (e1 - e2) = " << dif << "\n";
    return 0;
}
