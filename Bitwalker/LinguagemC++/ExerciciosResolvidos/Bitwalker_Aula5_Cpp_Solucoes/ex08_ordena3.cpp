
#include <iostream>
#include <utility>

void ordena3(int& a, int& b, int& c) {
    if (a > b) std::swap(a,b);
    if (b > c) std::swap(b,c);
    if (a > b) std::swap(a,b);
}

int main() {
    int a,b,c;
    std::cout << "a b c: ";
    std::cin >> a >> b >> c;
    ordena3(a,b,c);
    std::cout << a << " " << b << " " << c << "\n";
    return 0;
}
