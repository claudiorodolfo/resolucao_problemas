//Problema 1245 - Botas Perdidas
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1245
/*
A divis�o de Suprimentos de Botas e Cal�ados do Ex�rcito comprou um grande n�mero de pares de botas de v�rios tamanhos para seus soldados. No entanto, por uma falha de empacotamento da f�brica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada p�. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembal�-las, desta vez corretamente.
Quando o sargento descobriu que voc� sabia programar, ele solicitou com a gentileza habitual que voc� escrevesse um programa que, dada a lista contendo a descri��o de cada bota entregue, determina quantos pares corretos de botas poder�o ser formados no total.

Entrada
A entrada � composta por diversos casos de teste e termina com final de arquivo (EOF). A primeira linha de um caso de teste cont�m um inteiro N (2 = N = 10 4), N � par, indicando o n�mero de botas individuais entregues. Cada uma das N linhas seguintes descreve uma bota, contendo um n�mero inteiro M (30 = M = 60) e uma letra L, separados por uma espa�o em branco. M indica o n�mero da bota e L indica o p� da bota: L = 'D' indica que a bota � para o p� direito, L = 'E' indica que a bota � para o p� esquerdo.

Sa�da
Para cada caso de teste imprima uma linha contendo um �nico n�mero inteiro indicando o n�mero total de pares corretos que podem ser formados.
*/
#include <iostream>

using namespace std;

int main() {
	
	int quantidade;
	bool continua = cin>>quantidade;

	while (continua) {
		
		bool bota_selecionada[quantidade];
		int bota_tamanho[quantidade];
		char bota_lado[quantidade];
		int total_pares = 0;
		
		//preenche os arrays com os dados fornecidos
		for (int i = 0; i < quantidade; i++) {
			cin>>bota_tamanho[i]>>bota_lado[i];
			bota_selecionada[i] = false;
		}
		
		//procura os pares das botas
		for (int i = 0; i < quantidade; i++) {
			if (!bota_selecionada[i]) {
				for (int j = i+1; j < quantidade; j++) {
					if ((!bota_selecionada[j]) &&
					(bota_tamanho[i] == bota_tamanho[j]) && 
						(bota_lado[i] != bota_lado[j])) {
							bota_selecionada[j] = true;
							total_pares++;
							//total_pares = total_pares+1;
							break;				
					} //if
				} //for
			} //if
		} //for
		cout<<total_pares<<endl;
		continua = cin>>quantidade;
	} //while
	return 0;
}
