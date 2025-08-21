#include <iostream>
using namespace std;
int main(){
    int x=0,y=0; char c;
    cout<<"Comandos (N/S/L/O), termine com X: ";
    while(cin>>c){
        if(c=='X') break;
        switch(c){
            case 'N': y++; break;
            case 'S': y--; break;
            case 'L': x++; break; // Leste
            case 'O': x--; break; // Oeste
            default: cout<<"Ignorado: "<<c<<"\n";
        }
        cout<<"("<<x<<","<<y<<")\n";
    }
    return 0;
}
