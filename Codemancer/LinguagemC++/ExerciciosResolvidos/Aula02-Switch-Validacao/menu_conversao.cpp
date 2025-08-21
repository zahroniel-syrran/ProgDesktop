#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"[1] km->m\n[2] m->km\n[3] C->F\n[4] F->C\nEscolha: ";
    int op; if(!(cin>>op)){ cout<<"Entrada invalida\n"; return 0; }
    double x; cout<<"Valor: "; if(!(cin>>x)){ cout<<"Entrada invalida\n"; return 0; }
    cout<<fixed<<setprecision(2);
    switch(op){
        case 1: cout<<x*1000.0<<" m\n"; break;
        case 2: cout<<x/1000.0<<" km\n"; break;
        case 3: cout<<(x*9.0/5.0+32.0)<<" F\n"; break;
        case 4: cout<<((x-32.0)*5.0/9.0)<<" C\n"; break;
        default: cout<<"Opcao invalida\n";
    }
    return 0;
}
