#include <iostream>
using namespace std;

struct info_Aluno {
	int dificuldade;
	int inicio;
	int fim;
};

int main() {
	
	int no_Participantes, no_Questoes;
	cout << "Qual o numero de participantes? ";
	cin >> no_Participantes;
	cout << "Qual o numero de questoes? ";
	cin >> no_Questoes;
	int *n_Questoes = new int[no_Questoes];
	info_Aluno * pj = new info_Aluno[no_Participantes];

	char letra = 'A';

	cout << "======================" << endl;
	for (int i = 0; i < no_Participantes; i++) {
		cout << "Participante " << i + 1 << endl;
		cout << "-------------" << endl;
		for (int x = 0; x < no_Questoes; x++){
		cout << "Questao " << letra << endl;
		letra = char(letra + 1);
		cout << "Dificuldade: ";
		cin >> pj[i].dificuldade;
		}
		letra = 'A';
		cout << "===============" << endl;

	}
	cout << "mostrando dificuldades: " << endl;
		for (int i = 0; i < no_Participantes; i++) {
			cout << "Participante " << i + 1 << ": " << pj[i].dificuldade << endl;
	}
	system("pause");
	return 0;

}
