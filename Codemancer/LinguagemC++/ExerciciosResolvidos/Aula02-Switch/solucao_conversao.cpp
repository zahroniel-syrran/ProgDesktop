#include <iostream>
using namespace std;
int main(){
    int op; cout<<"[1] km->m [2] m->km [3] C->F [4] F->C: "; cin>>op;
    double v; cout<<"Valor: "; cin>>v;
    switch(op){
        case 1: cout<<v*1000<<" m\n"; break;
        case 2: cout<<v/1000<<" km\n"; break;
        case 3: cout<<(v*9/5+32)<<" F\n"; break;
        case 4: cout<<((v-32)*5/9)<<" C\n"; break;
        default: cout<<"Opcao invalida\n";
    }
    return 0;
}
