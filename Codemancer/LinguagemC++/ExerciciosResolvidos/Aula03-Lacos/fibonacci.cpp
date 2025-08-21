#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Quantos termos? ";
    if(!(cin>>n) || n<1){ cout<<"Invalido\n"; return 0; }
    long long a=0,b=1;
    for(int i=1;i<=n;++i){
        cout<<a<<(i<n?" ":"\n");
        long long nx=a+b; a=b; b=nx;
    }
    return 0;
}
