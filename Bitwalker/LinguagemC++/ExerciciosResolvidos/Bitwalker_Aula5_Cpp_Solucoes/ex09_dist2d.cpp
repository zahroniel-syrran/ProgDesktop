
#include <iostream>
#include <cmath>

double dist2d(double x1,double y1,double x2,double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx*dx + dy*dy);
}

int main() {
    double x1,y1,x2,y2;
    std::cout << "x1 y1 x2 y2: ";
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << "Distancia = " << dist2d(x1,y1,x2,y2) << "\n";
    return 0;
}
