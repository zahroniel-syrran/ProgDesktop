
#include <iostream>
int max3(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}
int main() {
    int a,b,c;
    std::cout << "Digite a b c: ";
    std::cin >> a >> b >> c;
    std::cout << "max3 = " << max3(a,b,c) << "\n";
    return 0;
}
