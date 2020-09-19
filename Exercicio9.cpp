#include <iostream>
using namespace std;

#define tam 10
int numero_aluno[tam];
float altura[tam];
float maior;
float menor;
int posi_maior;
int posi_menor;

int main(int argc, char** argv)
{

	for(int i = 0; i < tam; i++){
		cout << "Digite o numero do aluno: ";
		cin >> numero_aluno[i];
		cout << "Digite a altura do aluno: ";
		cin >> altura[i];
	}
	maior = altura[0];
		
	for(int i = 0; i < tam; i++){
		if(altura[i] > maior){
			maior = altura[i];
			posi_maior = i;
		}
		menor = altura[0];
		
		for(int i = 0; i < tam; i++){
			if(altura[i] <menor){
				menor = altura[i];
				posi_menor = i;
			}
			
			cout << "maior aluno na escola e: " << numero_aluno[posi_maior] << " com " << maior << endl;
			cout << "menor aluno na escola e: " << numero_aluno[posi_menor] << " com " << menor << endl;

		}
	}


	return 0;
}
