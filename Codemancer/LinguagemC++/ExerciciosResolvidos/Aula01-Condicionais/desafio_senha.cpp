#include <iostream>
#include <string>
#include <cctype>
using namespace std;
static bool temDigito(const string&s){ for(char c:s) if(isdigit((unsigned char)c)) return true; return false; }
static bool temLetra(const string&s){ for(char c:s) if(isalpha((unsigned char)c)) return true; return false; }
int main(){
    string senha;
    cout<<"Senha: ";
    getline(cin, senha);
    bool okLen = senha.size()>=8, okD=temDigito(senha), okL=temLetra(senha);
    if(okLen && okD && okL) cout<<"Senha valida\n";
    else{
        if(!okLen) cout<<"Minimo de 8 caracteres\n";
        if(!okD) cout<<"Pelo menos um digito\n";
        if(!okL) cout<<"Pelo menos uma letra\n";
    }
    return 0;
}
