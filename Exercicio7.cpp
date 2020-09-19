#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int x;
	
	cout << "**Multiplo de 5 no intervalo de 1 a 1500**" << endl;
	
	for(x=5; x<1500; x++)
		if(x%5 == 0){
			cout << "Multiplo de 5: " << x << "\n";
		}
			
	return 0;
}