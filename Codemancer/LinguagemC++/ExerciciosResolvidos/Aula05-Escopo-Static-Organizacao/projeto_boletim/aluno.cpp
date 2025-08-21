#include "aluno.h"
double media3(double a,double b,double c){ return (a+b+c)/3.0; }
char conceito(double m){
    if(m>=8.5) return 'A';
    if(m>=7.0) return 'B';
    if(m>=5.5) return 'C';
    if(m>=4.0) return 'D';
    return 'E';
}
bool aprovado(double m){ return m>=6.0; }
