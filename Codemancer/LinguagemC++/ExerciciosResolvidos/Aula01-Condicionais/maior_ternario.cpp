#include <iostream>
using namespace std;
int main(){
    long long a,b;
    cout<<"Digite dois inteiros: ";
    if(!(cin>>a>>b)){ cout<<"Entrada invalida.\n"; return 0; }
    cout<<"Maior = "<< (a>b? a:b) <<"\n";
    return 0;
}
