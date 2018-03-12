#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;



int main()
{
	int i, voto, votin = 0, maior = 0, maiorpos;
	float votos[23] = {0};
	for (i = 0; i < 10000000; i++)
	{
		cout << "Número do jogador (0=fim): ";
		cin >> voto;
		if(voto == 0)
			break;
		else if (voto > 23 || votos < 0)
		{
			cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;
			continue;
		}
		else
		{
			votos[voto - 1]++;
			votin++;
		}
	}

	cout << "Resultado da votação: " << endl << "Foram computados " << votin << " votos" << endl;
	
	for (i = 0; i < 23; i++)
	{
		if (votos[i] > maior)
		{
			maior = votos[i];
			maiorpos = i + 1;
		}

	}

	for (i = 0; i < 23; i++)
	{
		if (votos[i] > 0)
		{
			cout << i + 1 << "\t\t" << votos[i] << "\t\t" << (votos[i]/votin)*100 << "%" << "\n\n";
		}
	}
	cout << "O melhor jogador foi o número " << maiorpos << ", com " << votos[maiorpos - 1] << " votos, correspondendo a " << (votos[maiorpos - 1]/votin)*100 << "%" << " do total de votos.\n";
}