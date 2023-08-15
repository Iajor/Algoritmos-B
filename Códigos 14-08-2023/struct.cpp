#include <iostream>
// #include <string>
#include <ctime>

#define TAM 15
#define TAMLIMITE 6


using namespace std;

// typedef struct {
//         string nome;
//         string email;
//         string nascimento;

//     }Aluno;

// typedef struct {
//         string nome;
//         string email;
//         string nascimento;

//     };

typedef struct {
    int x;
    int y;
} Ponto;


int main(){

    Ponto ponto[TAM];
    srand(time(NULL));
    // Aluno alunos[TAM];

    for (int i = 0;i<TAM;i++){
    	
        ponto[i].x=TAMLIMITE-rand()%((TAMLIMITE*2)+1);
        ponto[i].y=TAMLIMITE-rand()%((TAMLIMITE*2)+1); 
    }

    for (int j=0;j<TAM;j++){
        if(ponto[j].x > 0 && ponto[j].y > 0){
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ") esta localizado no 1o quadrante\n";
        }else if (ponto[j].x < 0 && ponto[j].y > 0){
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ") esta localizado no 2o quadrante\n"; 
        }else if (ponto[j].x < 0 && ponto[j].y < 0){
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ")esta localizado no 3o quadrante\n";
        }else if (ponto[j].x > 0 && ponto[j].y < 0){
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ")esta localizado no 4o quadrante\n";
        }else if (ponto[j].x == 0 && ponto[j].y != 0){
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ")esta localizado no eixo y\n";
        }else if (ponto[j].x != 0 && ponto[j].y == 0){
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ")esta localizado no eixo x\n";
        }else{
            cout << "O ponto (" << ponto[j].x << " e " << ponto[j].y << ")esta localizado no zero x\n";
        }
 

    }

    return 1;

}
