#include <iostream>

using namespace std;

typedef struct {
    int jogador;
    int votos;
}jogadores;

double porcentagem( int x, int t)
{
    double j;
    return j = ((x*100)/t);
}

int main()
{
    jogadores j[23];
    int i = 1, n, votosT = 0, votosM = -1, jM;
    double p, pM;

    for( n = 0; n < 23; n++)
        j[n].votos = 0;

    cout << "Enquete: Quem foi o melhor jogador?\n\n";
    while( i =! 0){
        cout << "Numero do jogador (0 = fim): ";
         cin >> i;

        if( i < 0 || i > 23)
            cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;

        else{
            if( i != 0){
                votosT ++;
                j[i-1].jogador = i;
                j[i-1].votos++;
            }
            else
                break;
        }
    }

    cout << "Resultado da votacao:" << endl;
    cout << "Foram computados " << votosT << " votos" << endl;
    cout << "Jogador\tVotos\t%" << endl;

    for( n = 0; n < 23; n++){
        if(j[n].votos > 0){
            p = porcentagem( j[n].votos, votosT);
            cout << j[n].jogador << "\t" << j[n].votos << "\t" << p << endl;
            if( votosM < j[n].votos){
                jM = j[n].jogador;
                votosM = j[n].votos;
                pM = p;
            }
        }
    }

    cout << "\n\nO melhor jogador foi o  numero " << jM << ", com " << votosM << " votos, correspondente a " << pM << "% do total de votos" << endl;

    return 0;
}
