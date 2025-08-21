#include <iostream>
using namespace std;
int main(){
    int d; cout<<"Dia (1..7): ";
    if(!(cin>>d)){ cout<<"Entrada invalida\n"; return 0; }
    switch(d){
        case 1: cout<<"Domingo\n"; break;
        case 2: cout<<"Segunda\n"; break;
        case 3: cout<<"Terca\n"; break;
        case 4: cout<<"Quarta\n"; break;
        case 5: cout<<"Quinta\n"; break;
        case 6: cout<<"Sexta\n"; break;
        case 7: cout<<"Sabado\n"; break;
        default: cout<<"Valor invalido\n";
    }
    return 0;
}
