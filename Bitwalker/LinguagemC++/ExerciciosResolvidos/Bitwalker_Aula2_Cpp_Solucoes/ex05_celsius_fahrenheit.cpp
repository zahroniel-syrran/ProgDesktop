
#include <iostream>
#include <iomanip>
int main() {
    double c;
    std::cout << "Temperatura em Celsius: ";
    std::cin >> c;
    double f = c * 9.0 / 5.0 + 32.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit = " << f << "\n";
    return 0;
}
