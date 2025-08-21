#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double peso, altura;
    cout << "Peso (kg) e Altura (m): ";
    if(!(cin>>peso>>altura) || peso<=0 || altura<=0){
        cout<<"Dados invalidos.\n"; return 0;
    }
    double imc = peso/(altura*altura);
    cout<<fixed<<setprecision(2)<<"IMC: "<<imc<<" -> ";
    if(imc<18.5) cout<<"Abaixo do peso\n";
    else if(imc<25.0) cout<<"Normal\n";
    else if(imc<30.0) cout<<"Sobrepeso\n";
    else cout<<"Obesidade\n";
    return 0;
}
