#include <iostream>
using namespace std;

int main()
{

	int idade;

	cout << "Digite sua idade: " << endl;
	cin >> idade;


	if (idade >= 5 & idade <=7){
		cout << "Categoria Infantil A" << endl;
	}

	if (idade >=7 & idade <=10){

		cout << "Categoria Infantil B" << endl;
	}

	if(idade >=10 & idade <=13){
		cout << "Categoria Juvenil A" << endl;
	}
	
	if(idade >= 13 & idade <=17){
		cout << "Categoria Juvenil B" << endl;
	}
}