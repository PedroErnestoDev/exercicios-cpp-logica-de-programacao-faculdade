#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	string nome;
	
	cout << "Digite o nome do aluno: ";
	getline(cin, nome);
	
	cout << "Digite a nota 1: ";
	cin >> nota1;
	
	cout << "Digite a nota 2: ";
	cin >> nota2;
	
	cout << "Digite a nota 3: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	cout << "A media do aluno é: " << media << "\n";
	
	if(media >= 7){
		cout << "Aprovado";
	}
	else{
		cout << "Reprovado";
	}
	
	return 0;
}
