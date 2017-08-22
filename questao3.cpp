#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){

    int lancamentos, i;
    int x, dado[6];

    for( i = 0 ; i < 6; i++){
        dado[i] = 0;
    }

    srand(time(NULL));

    while(1){

        cout <<"Digite o numero de lancamento do dado "<< endl;
        cin >> lancamentos;

        if( lancamentos == 0)
            break;

        for(i= 0; i<lancamentos; i++){

            x = (rand() % 6) + 1;
            for(int j=0; j<6; j++){

                if (x == j+1)
                    dado[j]++;



            }

        }

}



return 0;
}
