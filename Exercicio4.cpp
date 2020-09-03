#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	float salario, reajuste, novoSal;
	
	cout << "Entre com o salario: " << endl;
	cin >> salario;
	
	if(salario <= 1000){
		novoSal = salario*0.15 + salario;
		cout << "Seu novo salario: " << novoSal << endl;
	}
	
	if(salario>=1000 & salario <1500){
		novoSal = salario*0.10 + salario;
		cout << "Seu novo salario: " << novoSal << endl;
	}
	
	if(salario>1500){
		novoSal = salario*0.05 + salario;
		cout << "Seu novo salario: " << novoSal << endl;
	}
	
	return 0;
}