
#include <iostream>
int main() {
    double a, b, c;
    std::cout << "Digite 3 valores: ";
    std::cin >> a >> b >> c;
    double media = (a + b + c) / 3.0;
    std::cout << "Media = " << media << "\n";
    return 0;
}
