#include <iostream>
using namespace std;
void tocar(){ static int vezes=0; ++vezes; cout<<"Tocou "<<vezes<<" vez(es)\n"; }
int main(){ tocar(); tocar(); tocar(); return 0; }
