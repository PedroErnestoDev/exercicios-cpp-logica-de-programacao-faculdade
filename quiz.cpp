#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	string questao1, questao2, questao3, questao4, questao5;
	int notaAluno, porcentagemAcertos, respostasErradas;
	
	notaAluno = 0;
	respostasErradas = 0;
	
	cout << "Quizz - Dinossauros\n";
	cout << "Obs: Respostas Apenas com a letra das alternativas, exemplo: a\n";
	
	cout << "1) Maior Dinossauro que ja viveu na terra\n A) T-rex\n B) Estegossauro\n C) Patagotitan\n D) Parassauro\n";
	cout << "Resposta: ";
	cin >> questao1;
	
	if(questao1 == "c" || questao1 == "C" || questao1 == "Patagotitan"){
		notaAluno++;
	} else {
		respostasErradas++;
	}
	
	cout << "\n2) Quais destes é um carnivoro\n A) T-rex\n B) Estegossauro\n C) Triceratops\n D) Parassauro\n";
	cout << "Resposta: ";
	cin >> questao2;
	
	if(questao2 == "a" || questao2 == "A" || questao2 == "t-rex"){
		notaAluno++;
	} else {
		respostasErradas++;
	}
	
	cout << "\n3) Quais destes não são é considerado um dinassaruo?\n A) T-rex\n B) Mosassauro\n C) Triceratops\n D) Titanossaruro\n";
	cout << "Resposta: ";
	cin >> questao3;
	
	if(questao3 == "b" || questao3 == "B" || questao3 == "Mosassauro"){
		notaAluno++;
	} else {
		respostasErradas++;
	}
	
	cout << "\n4) Qual destes é o mais rapido?\n A) T-rex\n B) Mosassauro\n C) Velociraptor\n D) Titanossaruro\n";
	cout << "Resposta: ";
	cin >> questao4;
	
	if(questao4 == "c" || questao4 =="C" || questao4 == "Velociraptor"){
		notaAluno++;
	} else {
		respostasErradas++;
	}
	
	cout << "\n5) Qual destes é o mais pesado?\n A) Acrocantossauro\n B) Mosassauro\n C) Velociraptor\n D) Titanossaruro\n";
	cout << "Resposta: ";
	cin >> questao5;
	
	if(questao5 == "d" || questao5 == "D" || questao5 == "Titanossauro"){
		notaAluno++;
	} else {
		respostasErradas++;
	}
	
	porcentagemAcertos = (notaAluno*100)/5;
	
	if (porcentagemAcertos == 100){
		cout << "Perfeito, você acertou: " << porcentagemAcertos << "% do quiz";
	} else if (porcentagemAcertos >= 80 and porcentagemAcertos < 100){
		cout << "Muito Bem, Você acertou: " << porcentagemAcertos << "% do quiz e você errou " << respostasErradas << " de 5 questões";
	} else if (porcentagemAcertos >= 60 and porcentagemAcertos <= 80){
		cout << "Dava para ser melhor mas Você acertou: " << porcentagemAcertos << "% do quiz e você errou " << respostasErradas << " de 5 questões";
	} else {
		cout << "Realmente você nao sabe nada sobre dinossauros e Você acertou: " << porcentagemAcertos << "% do quiz e você errou " << respostasErradas << " de 5 questões";
	}
	
	return 0;
}
