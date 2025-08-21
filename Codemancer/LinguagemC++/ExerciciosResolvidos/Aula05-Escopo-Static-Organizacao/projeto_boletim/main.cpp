#include <iostream>
#include <iomanip>
#include "aluno.h"
using namespace std;
int main(){
    double n1,n2,n3;
    cout<<"Digite 3 notas: ";
    if(!(cin>>n1>>n2>>n3)){ cout<<"Entrada invalida\n"; return 0; }
    double m=media3(n1,n2,n3);
    cout<<fixed<<setprecision(2);
    cout<<"Media = "<<m<<"\n";
    cout<<"Conceito = "<<conceito(m)<<"\n";
    cout<<"Situacao = "<<(aprovado(m)?"Aprovado":"Reprovado")<<"\n";
    return 0;
}
