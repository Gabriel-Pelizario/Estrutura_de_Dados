#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <list>
using namespace std;

int main(int argc, char** argv)
{
	
	int id;
	char op;
	list<int> qtde;
	int calc;

	
	do{
		
		cout <<"Idade: ";
		cin >> id;
		cout <<"---Qual a opinião sobre o filme?--- " << endl;
		cout <<"[1]""-Ótimo" << endl;
		cout <<"[2]""-Bom" << endl;
		cout <<"[3]""-Regular" << endl;
		cout <<"[4]""-Ruim" << endl;
		cout <<"[5]""-Resultado das pesquisas" << endl;
		cin >> op;
		cout <<"" << endl;
		
		switch(op)
		{
		case '5':
			cout <<"Quantidade de psssoas que responderam a pesquisa: " << qtde.size() << endl;
			cout <<"Média da idade das pessoas: " << calc << endl;
			cout <<"Porcentagem das respostas: " << endl;
			break;
		
		case '1':
			qtde.push_front(id);
			calc = id/qtde.size();
			break;
		
		case '2':
			qtde.push_front(id);
			calc = id/qtde.size();
			break;
		
		case '3':
			qtde.push_front(id);
			calc = id/qtde.size();
			break;
		
		case '4':
			qtde.push_front(id);
			calc = id/qtde.size();
			break;
		
		default:
			break;
		}

		system("pause");
		system("cls");
	}while(op!=4);

	
	return 0;
}