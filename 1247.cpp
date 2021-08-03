#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float d_fugitivo_guarda, v_fugitivo, v_guarda;
    float d_fugitivo = 12.0;
    
	while (cin>>d_fugitivo_guarda>>v_fugitivo>>v_guarda) {
		
		//hipotenusa = soma do quadrado dos catetos	
    	float d_guarda = sqrt(pow(d_fugitivo_guarda,2) + pow(d_fugitivo,2));
    	
		//tempo = distancia / velocidade
    	float t_guarda = d_guarda/v_guarda;
    	float t_fugitivo = d_fugitivo/v_fugitivo;
    
    	if (t_guarda <= t_fugitivo) {
		   cout<<"S"<<endl;
    	} else {
            cout<<"N"<<endl;
    	}
	}
}
