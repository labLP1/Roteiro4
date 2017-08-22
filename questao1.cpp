#include <stdio.h>
#include <iostream>

using namespace std;

int x1, maior;

int main()
{
    cout << "Insira no MINIMO 2 VALORES (PARA FINALIZAR DIGITE 0) > "<< endl;

    cin >>x1;

    maior = x1;

    while(x1 != 0){

        cin >> x1;

        if(x1>maior){
            maior = x1;
        }

        if(x1==0){

            cout << "MAIOR VALOR : " << maior<< endl;
            break;
        }

    }



    return 0;

}
