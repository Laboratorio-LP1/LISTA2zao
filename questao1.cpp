#include<iostream>
#include <string.h>

using namespace std;

typedef struct
{
	char aluno[30];
	char endereco[50];
	char matricula[10];
	char curso[30];
} tAluno;

static tAluno gAluno[100];

unsigned int consultaAlunosPorCurso(char *curso)
{
	int total = 0;
	for (int i = 0; i < 30; i++)
	{
		if (strcmp(gAluno[i].curso, curso) == 0)
			total++;
	}
	return total;
}

int main()
{
	char computacao[30] = "computacao";

	cout << "Qual o nome do primeiro aluno?\n";
	cin >> gAluno[0].aluno;
	cout << "Qual o seu endereco?\n";
	cin >> gAluno[0].endereco;
	cout << "Qual o numero de matricula?\n";
	cin >> gAluno[0].matricula;
	cout << "Qual seu curso?\n";
	cin >> gAluno[0].curso;

	cout << "Qual o nome do segundo aluno?\n";
	cin >> gAluno[1].aluno;
	cout << "Qual o seu endereco?\n";
	cin >> gAluno[1].endereco;
	cout << "Qual o numero de matricula?\n";
	cin >> gAluno[1].matricula;
	cout << "Qual seu curso?\n";
	cin >> gAluno[1].curso;

	cout << "Qual o nome do terceiro aluno?\n";
	cin >> gAluno[2].aluno;
	cout << "Qual o seu endereco?\n";
	cin >> gAluno[2].endereco;
	cout << "Qual o numero de matricula?\n";
	cin >> gAluno[2].matricula;
	cout << "Qual seu curso?\n";
	cin >> gAluno[2].curso;
	
	unsigned int valor = consultaAlunosPorCurso(computacao);

	cout << "\nExistem " << consultaAlunosPorCurso(computacao) << " alunos no curso de computacao.\n\n";
}

