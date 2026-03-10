#include <iostream>
#include <locale>
using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cigarrosFumados, anosFumados, macos;
	float valorMaco, valorBruto;
	
	cout << "Cigarros Fumados Diariamente: ";
	cin >> cigarrosFumados;
	
	cout << "Tempo em anos como fumante: ";
	cin >> anosFumados;
	
	cout << "Valor do maço: ";
	cin >> valorMaco;
	
	macos = cigarrosFumados/20;
	
	valorBruto = (macos * valorMaco) * (anosFumados * 365);
	
	cout << "O valor total gasto em cigarros foi: R$ " << valorBruto;
	
	return 0;
}
