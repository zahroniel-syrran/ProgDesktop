#include "calc.h"
#include <stdexcept>
int somar(int a,int b){ return a+b; }
int subtrair(int a,int b){ return a-b; }
int multiplicar(int a,int b){ return a*b; }
int dividir(int a,int b){ if(b==0) throw std::runtime_error("Divisao por zero"); return a/b; }
int executar(int op,int a,int b){
    switch(op){
        case 1: return somar(a,b);
        case 2: return subtrair(a,b);
        case 3: return multiplicar(a,b);
        case 4: return dividir(a,b);
        default: throw std::runtime_error("Opcao invalida");
    }
}
