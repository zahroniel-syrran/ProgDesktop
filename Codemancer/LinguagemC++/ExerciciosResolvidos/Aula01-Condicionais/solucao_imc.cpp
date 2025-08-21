#include <iostream>
using namespace std;
int main(){
    double peso, altura; 
    cout << "Peso (kg) e Altura (m): ";
    cin >> peso >> altura;
    double imc = peso/(altura*altura);
    if (imc < 18.5) cout << "Abaixo do peso\n";
    else if (imc < 25) cout << "Normal\n";
    else if (imc < 30) cout << "Sobrepeso\n";
    else cout << "Obesidade\n";
    return 0;
}
