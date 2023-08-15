/**
 * Em um plano cartesiano, um círculo pode ser definido pelas coordenadas do centro e pelo raio, 
 * enquanto um retângulo de lados paralelos aos eixos pode ser definido pelas coordenadas dos 
 * vértices superior esquerdo e inferior direito. Escreva um programa que leia os valores que definem 
 * um retângulo e um círculo, e verifique qual tem o maior perímetro e qual tem a maior área.
 */

#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

typedef struct {
        int x, y;
        int raio;
        int perimetro;
        int area;

    } Circulo;

typedef struct {
        int xSuperiorEsq;
        int ySuperiorEsq;
        int xInferiorDir;
        int yInferiorDir;
        int altura;
        int base;
        int perimetro;
        int area;

    } Retangulo;


int main(){
    Circulo c;
    Retangulo r;

    cout << "Informe os dados do circulo: \n" ;   
    cout << "A coordenada x:\n" ;
    cin >> c.x;
    cout << "A coordenada y:\n" ;
    cin >> c.y;
    cout << "O raio:\n" ;
    cin >> c.raio;
    c.perimetro=2*PI*c.raio;
    c.area=PI*pow(c.raio,2);

    cout << "Informe os dados do retangulo: \n";
    cout << "A coordenada x superior esquerda:\n";
    cin >> r.xSuperiorEsq;
    cout << "A coordenada y superior esquerda:\n";
    cin >> r.ySuperiorEsq;
    cout << "A coordenada x inferior direita:\n";
    cin >> r.xInferiorDir;
    cout << "A coordenada y inferior direita:\n";
    cin >> r.yInferiorDir;
    r.altura = abs(r.ySuperiorEsq - r.yInferiorDir);
    r.base = abs(r.xSuperiorEsq - r.xInferiorDir);
    r.perimetro = (r.altura * 2) + (r.base * 2);
    r.area = r.altura * r.base;

    if (c.area > r.area) {
		cout << "O circulo possui area maior: " << c.area << endl;
	} else {
		cout << "O retangulo possui area maior: " << r.area << endl;
	}

	if (c.perimetro > r.perimetro) {
		cout << "O circulo possui perimetro maior: " << c.perimetro << endl;
	} else {
		cout << "O retangulo possui perimetro maior: " << r.perimetro << endl;
	}
    
  
    

}
