#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    long long n; cout<<"Numero: ";
    if(!(cin>>n)){ cout<<"Entrada invalida\n"; return 0; }
    if(n==0){ cout<<"Digitos: 1\n"; return 0; }
    long long x = llabs(n);
    int c=0; while(x>0){ x/=10; ++c; }
    cout<<"Digitos: "<<c<<"\n";
    return 0;
}
