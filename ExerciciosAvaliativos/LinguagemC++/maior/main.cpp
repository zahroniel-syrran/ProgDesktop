#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1,n2;
	
	std::cout<<"Digite um numero: ";
	std::cin>>n1;
	std::cout<<"Digite outro numero: ";
	std::cin>>n2;
	
	if(n1>n2){
		std::cout<<"O maior e"<<n1;
	} else {
		std::cout<<"O maior e "<<n2;
	}
	return 0;
}
