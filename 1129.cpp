//Problema 1129 - Leitura Otica
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1129
/*
O professor Jo�o decidiu aplicar somente provas de m�ltipla escolha, para facilitar a corre��o. Em cada prova, cada quest�o ter� cinco alternativas (A, B, C, D e E), e o professor vai distribuir uma folha de resposta para cada aluno. Ao final da prova, as folhas de resposta ser�o escaneadas e processadas digitalmente para se obter a nota de cada aluno. Inicialmente, ele pediu ajuda a um sobrinho, que sabe programar muito bem, para escrever um programa para extrair as alternativas marcadas pelos alunos nas folhas de resposta. O sobrinho escreveu uma boa parte do software, mas n�o pode termin�-lo, pois precisava treinar para a Maratona de Programa��o.
Durante o processamento, a prova � escaneada usando tons de cinza entre 0 (preto total) e 255 (branco total). Ap�s detectar os cinco ret�ngulos correspondentes a cada uma das alternativas, ele calcula a m�dia dos tons de cinza de cada pixel, retornando um valor inteiro correspondente �quela alternativa. Se o quadrado foi preenchido corretamente o valor da m�dia � zero (preto total). Se o quadrado foi deixado em branco o valor da m�dia � 255 (branco total). Assim, idealmente, se os valores de cada quadrado de uma quest�o s�o (255, 0, 255, 255, 255), sabemos que o aluno marcou a alternativa B para essa quest�o. No entanto, como as folhas s�o processadas individualmente, o valor m�dio de n�vel de cinza para o quadrado totalmente preenchido n�o � necessariamente 0 (pode ser maior); da mesma forma, o valor para o quadrado n�o preenchido n�o � necessariamente 255 (pode ser menor). O prof. Jo�o determinou que os quadrados seriam divididos em duas classes: aqueles com m�dia menor ou igual a 127 ser�o considerados pretos e aqueles com m�dia maior a 127 ser�o considerados brancos.
Obviamente, nem todas as quest�es das folhas de resposta s�o marcadas de maneira correta. Pode acontecer de um aluno se enganar e marcar mais de uma alternativa na mesma quest�o, ou n�o marcar nenhuma alternativa. Nesses casos, a resposta deve ser desconsiderada.
O professor Jo�o necessita agora de um volunt�rio para escrever um programa que, dados os valores dos cinco ret�ngulos correspondentes �s alternativas de uma quest�o determine qual a alternativa corretamente marcada, ou se a resposta � quest�o deve ser desconsiderada.

Entrada
A entrada cont�m v�rios casos de teste. A primeira linha de um caso de teste cont�m um n�mero inteiro N indicando o n�mero de quest�es da folha de respostas (1 = N = 255). Cada uma das N linhas seguintes descreve a resposta a uma quest�o e cont�m cinco n�meros inteiros A, B, C, D e E, indicando os valores de n�vel de cinza m�dio para cada uma das alternativas da resposta (0 = A, B, C, D, E = 255).
O ultimo caso de teste � seguido por uma linha que cont�m apenas um n�mero zero.

Sa�da
Para cada caso de teste da entrada seu programa deve imprimir N linhas, cada linha correspondendo a uma quest�o. Se a resposta � quest�o foi corretamente preenchida na folha de resposta, a linha deve conter a alternativa marcada (�A�, �B�, �C�, �D� ou �E�). Caso contr�rio, a linha deve conter o caractere �*� (asterisco).
*/
#include <iostream>
 
using namespace std;
 
int main() {
	int numero_questoes;
	cin>>numero_questoes;
	
	int a, b, c, d, e;
	
	while (numero_questoes != 0) {
		for (int i = 0; i < numero_questoes; i++) {
			cin>>a>>b>>c>>d>>e;
			a = (a <= 127) ? 1 : 0;
			b = (b <= 127) ? 1 : 0;
			c = (c <= 127) ? 1 : 0;	
			d = (d <= 127) ? 1 : 0;
			e = (e <= 127) ? 1 : 0;	
			
			if (a+b+c+d+e != 1) {
				cout<<"*"<<endl;
			} else {
				if (a == 1)
					cout<<"A"<<endl;
				else if (b == 1)
					cout<<"B"<<endl;
				else if (c == 1)
					cout<<"C"<<endl;
				else if (d == 1)
					cout<<"D"<<endl;
				else 
					cout<<"E"<<endl;	
			}			
		}
		cin>>numero_questoes;
	}
	return 0;
}
