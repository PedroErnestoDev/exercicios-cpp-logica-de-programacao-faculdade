#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string resultado(){
	float salarioBruto, valorHora, horasTrabalhadas;
	
	cout << "Digite o valor da hora: ";
	cin >> valorHora;
	
	cout << "Digite as horas trabalhadas: ";
	cin >> horasTrabalhadas;
	
	salarioBruto = valorHora * horasTrabalhadas;
	
	cout << "O Valor do salario bruto é: " << salarioBruto;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	resultado();
	
	return 0;
}



