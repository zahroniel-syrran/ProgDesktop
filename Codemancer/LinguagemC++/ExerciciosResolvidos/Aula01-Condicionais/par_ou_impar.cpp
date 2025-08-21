#include <iostream>
using namespace std;
int main(){
    long long n;
    cout << "Numero inteiro: ";
    if(!(cin>>n)){ cout<<"Entrada invalida.\n"; return 0; }
    cout << ( (n%2==0) ? "Par\n" : "Impar\n" );
    return 0;
}
