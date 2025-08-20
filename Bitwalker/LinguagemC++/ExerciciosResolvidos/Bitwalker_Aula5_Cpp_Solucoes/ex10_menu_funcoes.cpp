
#include <iostream>
#include <iomanip>

double soma(double a,double b){ return a+b; }
double sub (double a,double b){ return a-b; }
double mul (double a,double b){ return a*b; }
double divs(double a,double b){ return (b==0.0)?0.0:a/b; }

void mostraMenu(){
    std::cout << "\n===== MENU =====\n"
              << "1) Soma\n"
              << "2) Subtracao\n"
              << "3) Multiplicacao\n"
              << "4) Divisao\n"
              << "0) Sair\n"
              << "Opcao: ";
}

int main(){
    std::cout << std::fixed << std::setprecision(2);
    int op;
    do{
        mostraMenu();
        std::cin >> op;
        if(op==0) break;
        double a,b;
        std::cout << "a b: ";
        std::cin >> a >> b;
        if(op==1) std::cout << "Resultado = " << soma(a,b) << "\n";
        else if(op==2) std::cout << "Resultado = " << sub(a,b)  << "\n";
        else if(op==3) std::cout << "Resultado = " << mul(a,b)  << "\n";
        else if(op==4) std::cout << "Resultado = " << divs(a,b) << "\n";
        else std::cout << "Opcao invalida\n";
    }while(true);
    std::cout << "Fim.\n";
    return 0;
}
