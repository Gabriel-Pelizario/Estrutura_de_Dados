#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	double peso, altura, imc;
	
	cout << "****Peso ideal****" << endl;
	
	cout << "Entre com seu peso atual: " << endl;
	cin >> peso;
	cout << "Entre com sua altura: " << endl;
    cin >> altura;
    
    imc = peso * altura;
    
    cout << "Seu IMC e: "<< imc << endl;
    
    if(imc<20) {
    	cout << "Você esta abaixo do peso!" << endl;
	}
    if(imc>=20 & imc <25){
    	cout << "Voce esta no peso ideal, parabens!" << endl;
	}
    if(imc>25){
    	cout << "Voce esta com o peso acima do ideal, faca dieta!" << endl;
	}
	
	return 0;
}