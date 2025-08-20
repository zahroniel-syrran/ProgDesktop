
#include <iostream>
int main() {
    int a, b, aux;
    std::cout << "a e b: ";
    std::cin >> a >> b;
    std::cout << "Antes: a=" << a << " b=" << b << "\n";
    aux = a;
    a = b;
    b = aux;
    std::cout << "Depois: a=" << a << " b=" << b << "\n";
    return 0;
}
