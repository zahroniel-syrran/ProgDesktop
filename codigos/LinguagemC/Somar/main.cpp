/*
	Este programa tem como objetivo mostra o uso das funcoes e C++
	
*/

#include <iostream>

// Todas as funcoes devem ser declaradas nesta parte do programa.


int soma (int a, int b){
	return a + b;
}

int multiplica (int a, int b){
	return a * b;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, n3;
	
	//Ler os numeros n1 e n2
	std::cout<<"Digite o primeiro numero: ";
	std::cin>>n1;
	std::cout<<"Digite o segundo numero: ";
	std::cin>>n2;	
	
	//Somas
	std::cout<<n1<<" + "<<n2<<" = "<<soma(n1,n2)<<"\n";
	
	std::cout<<n1<<" + 10"<<" = "<<soma(n1,10)<<"\n";
	
	std::cout<<"15 + "<<n1<<" = "<<soma(15,n1)<<"\n";
	
	std::cout<<"10 + 5 = "<<soma(10,5)<<"\n";
		
	n3 = soma(n1,n2);
	std::cout<<"Valor de n3"<<n3<<"\n";
	
	
	// Multiplicacoes
	std::cout<<n1<<" x "<<n2<<" = "<<multiplica(n1,n2)<<"\n";
	
	std::cout<<n1<<" x 10"<<" = "<<multiplica(n1,10)<<"\n";
	
	std::cout<<"15 x "<<n1<<" = "<<multiplica(15,n1)<<"\n";
	
	std::cout<<"10 x 5 = "<<multiplica(10,5)<<"\n";
	
	std::cout<<"3x("<<n1<<" + "<<n2<<")= "<<multiplica(3,soma(n1,n2))<<"\n";
	
	return 0;
}


