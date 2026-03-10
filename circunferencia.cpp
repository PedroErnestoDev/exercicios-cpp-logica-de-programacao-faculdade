#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
	
	cout << "Informa o valor do RAIO: ";
	cin >> raio;
	
	area = 3.1416 * (raio * raio);
	
	cout << "O valor da area é: " << area; 
	
	return 0;
}
