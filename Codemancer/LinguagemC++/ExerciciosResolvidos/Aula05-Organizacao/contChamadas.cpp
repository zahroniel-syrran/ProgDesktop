#include <iostream>
using namespace std;
int contChamadas(){
    static int c=0;
    return ++c;
}
int main(){
    for(int i=0;i<5;i++) cout<<contChamadas()<<" ";
    return 0;
}
