//Problema 2242 - Huaauhahhuahau
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2242
/*
Em chats, � muito comum entre jovens e adolescentes utilizar sequ�ncias de letras, que parecem muitas vezes aleat�rias, para representar risadas. Alguns exemplos comuns s�o:
huaauhahhuahau
hehehehe
ahahahaha
jaisjjkasjksjjskjakijs
huehuehue

Cl�udia � uma jovem programadora que ficou intrigada pela sonoridade das �risadas digitais�. Algumas delas ela nem mesmo consegue pronunciar! Mas ela percebeu que algumas delas parecem transmitir melhor o sentimento da risada que outras. A primeira coisa que ela percebeu � que as consoantes n�o interferem no quanto as risadas digitais influenciam na transmiss�o do sentimento. A segunda coisa que ela percebeu � que as risadas digitais mais engra�cadas s�o aquelas em que as sequ�ncias de vogais s�o iguais quando lidas na ordem natural (da esquerda para a direita) ou na ordem inversa (da direita para a esquerda), ignorando as consoantes. Por exemplo, �hahaha� e �huaauhahhuahau� est�o entre as risadas mais engra�adas, enquanto �riajkjdhhihhjak� e �huehuehue� n�o est�o entre as mais engra�adas.
Cl�udia est� muito atarefada com a an�lise estat�stica das risadas digitais e pediu sua ajuda para escrever um programa que determine, para uma risada digital, se ela � das mais engra�adas ou n�o.

Entrada
A entrada � composta por uma linha, contendo uma sequ�ncia de no m�ximo 50 caracteres, formada apenas por letras min�sculas sem acentua��o. As vogais s�o as letras �a�,�e�,�i�,�o�,�u�. A sequ�ncia cont�m pelo menos uma vogal.

Sa�da
Seu programa deve produzir uma linha contendo um caractere, �S� caso a risada seja das mais engra�cadas, ou �N� caso contr�rio.
*/

#include <iostream>

using namespace std;

int main() {

	char vogais[10] = {'a', 'e', 'i','o','u', 'A', 'E', 'I', 'O', 'U'};
	string risada;
	
	cin>>risada;  //exemplo de entrada: Huaauhahhuahau
	
	string risada_vogais = "";
	//loop que obtem a string passada somente com vogais
	//apos o termino do loop, risada_vogais vai ter: uaauauaau
	for (int i = 0; i < risada.size(); i++) {
		for (int j = 0; j < 10; j++) {
			if (risada[i] == vogais[j]) {
				risada_vogais = risada_vogais + risada[i];
				//risada_vogais += risada[i];
				break;
			} 
		}
	}
	//cout<<risada_vogais<<endl;
	
	//laco que verifica se a string � um palindromo, ou seja,
	//identica de tras para frente.	Por exemplo, uaauauaau, � palindromo.
	bool palindromo = true;
	for (int i = 0; i < risada_vogais.size()/2; i++) {
		int indice_inverso = (risada_vogais.size()-1) - i;	
		if (risada_vogais[i] != risada_vogais[indice_inverso]) {
			palindromo = false;
			break;
		}
	}
	
	//saida. S� imprime S, se n�o entrar dentro do if do bloco acima			
	if (palindromo)	{	
		printf("S\n");
	}  else {
		printf("N\n");
	}
}
