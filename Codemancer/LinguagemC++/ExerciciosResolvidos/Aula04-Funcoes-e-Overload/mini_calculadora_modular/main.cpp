#include <iostream>
#include "calc.h"
using namespace std;
int main(){
    int op,a,b;
    cout<<"[1]+ [2]- [3]* [4]/ : ";
    if(!(cin>>op)){ cout<<"Entrada invalida\n"; return 0; }
    cout<<"a b: "; if(!(cin>>a>>b)){ cout<<"Entrada invalida\n"; return 0; }
    try{ cout<<"Resultado: "<<executar(op,a,b)<<"\n"; }
    catch(const exception& e){ cout<<"Erro: "<<e.what()<<"\n"; }
    return 0;
}
