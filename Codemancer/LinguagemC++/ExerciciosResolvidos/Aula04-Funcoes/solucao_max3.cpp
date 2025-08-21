#include <iostream>
using namespace std;
int max3(int a,int b,int c){
    int m=(a>b?a:b);
    return (m>c?m:c);
}
int main(){
    int a,b,c; cin>>a>>b>>c;
    cout<<"Maior="<<max3(a,b,c)<<"\n";
    return 0;
}
