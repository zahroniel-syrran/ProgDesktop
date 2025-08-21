#include <iostream>
using namespace std;
int main(){
    int nota10; // nota em 0..10, usaremos switch em faixas por divisão
    cout<<"Nota (0..10): ";
    if(!(cin>>nota10)){ cout<<"Entrada invalida\n"; return 0; }
    if(nota10<0 || nota10>10){ cout<<"Invalida\n"; return 0; }
    switch(nota10){
        case 10:
        case 9: cout<<"A\n"; break;
        case 8:
        case 7: cout<<"B\n"; break;
        case 6:
        case 5: cout<<"C\n"; break;
        case 4:
        case 3: cout<<"D\n"; break;
        default: cout<<"E\n"; // 0,1,2
    }
    return 0;
}
