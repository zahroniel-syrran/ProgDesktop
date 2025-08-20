
#include <iostream>

double mediaP(double n1,double p1,double n2,double p2) {
    double den = p1 + p2;
    if (den == 0.0) return 0.0; // alternativa: std::numeric_limits<double>::quiet_NaN()
    return (n1*p1 + n2*p2) / den;
}

int main() {
    double n1,p1,n2,p2;
    std::cout << "n1 p1 n2 p2: ";
    std::cin >> n1 >> p1 >> n2 >> p2;
    std::cout << "Media ponderada = " << mediaP(n1,p1,n2,p2) << "\n";
    return 0;
}
