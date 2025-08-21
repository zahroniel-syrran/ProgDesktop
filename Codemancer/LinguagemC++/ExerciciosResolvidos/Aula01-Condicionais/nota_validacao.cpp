#include <iostream>
using namespace std;
int main(){
    double nota;
    cout<<"Nota (0..10): ";
    if(!(cin>>nota)){
        cout<<"Entrada invalida.\n"; return 0;
    }
    if(nota<0 || nota>10) cout<<"Nota invalida\n";
    else cout<<"Nota valida\n";
    return 0;
}
