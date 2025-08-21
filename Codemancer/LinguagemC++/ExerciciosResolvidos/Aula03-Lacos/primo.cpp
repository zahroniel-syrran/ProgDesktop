#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n; cout<<"n: ";
    if(!(cin>>n) || n<2){ cout<<"Nao primo\n"; return 0; }
    for(long long d=2; d*d<=n; ++d){
        if(n%d==0){ cout<<"Nao primo\n"; return 0; }
    }
    cout<<"Primo\n"; return 0;
}
