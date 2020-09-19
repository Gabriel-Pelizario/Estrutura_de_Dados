#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	
	float candidato1=1, candidato2=1, nulo=1, branco=1;
	char op;
	
	do{
	
	cout << "****URNA ELETRONICA****" << endl;
	cout << "" << endl;
	cout << "Escolha uma das opcoes abaixo" << endl;
	cout << "[0]""-Acompanhamento dos candidatos" << endl;
	cout << "[1]""-Barros Munhoz" << endl;
	cout << "[2]""-Toninho Belini" << endl;
	cout << "[3]""-Voto nulo" << endl;
	cout << "[4]""-Voto em branco" << endl;
	cout << "[5]""-Encerrar" << endl;
	cin >> op;
	cout << "" << endl;

	
	
		switch(op)
		{
			case '0':
			cout << "Percentual de votos candidato [1]: " << candidato1/100 <<"%" << endl;
			cout << "Percentual de votos candidato [2]: " << candidato2/100 <<"%" << endl;
			cout << "Percentual de votos nulos [3]: " << nulo/100 <<"%" << endl;
			cout << "percentual de votos em brancos [4]: " << branco/100 <<"%" << endl;
			break;
			
			case '1':
			cout << "Seu voto vai para o candidato: ""Barros Munhoz" << endl;
			cout << "Total de votos para o candidato: " << candidato1++ << endl;
			break;
	
			case '2':
			cout << "Seu voto vai para o candidato: ""Toninho Belini" << endl;
			cout << "Total de votos para o candidato: " << candidato2++ << endl;
			break;
	
			case '3':
			cout << "Seu voto e nulo" << endl;
			cout << "Total de votos nulos: " << nulo++ << endl;
			break;
	
			case '4':
			cout << "Seu voto e branco" << endl;
			cout << "Total de votos em branco: " << branco++ << endl;
			break;
	
			case '5':
			cout <<"Operacao finalizada!" << endl;
			break;
	
			default:
			cout <<"Opcao invalida" << endl;
			break;
		
		}
	system("pause");
	system("cls");
			
	}while(op!=5);
return 0;
}