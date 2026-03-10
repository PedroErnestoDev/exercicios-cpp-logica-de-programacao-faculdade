#include <iostream>
#include <locale>
using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float valorA, valorB;
	
	cout << "Digite o valor de A: ";
	cin >> valorA;
	
	cout << "Digite o valor de B: ";
	cin >> valorB;
	
	cout << "Os valores são: " << valorA << " e " << valorB << "\n";
	
	cout << "Mude o valor de A: ";
	cin >> valorA;
	
	cout << "Mude o valor de B: ";
	cin >> valorB;
	
	cout << "Os valores são: " << valorA << " e "<< valorB;
	
	return 0;
}
