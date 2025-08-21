#include <iostream>
using namespace std;
int main(){
    int n; cout<<"n: "; if(!(cin>>n)||n<0){ cout<<"Invalido\n"; return 0; }
    unsigned long long f=1;
    for(int i=2;i<=n;++i) f*=i;
    cout<<n<<"! = "<<f<<"\n";
    return 0;
}
