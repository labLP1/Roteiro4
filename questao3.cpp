#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int main(){

    int lancamentos, i, j;
    int x, dado[6];

    

    srand(time(NULL));

    while(1){
		
		for( i = 0 ; i < 6; i++){
			dado[i] = 0;
		}
		
        cout <<"Digite o numero de lancamento do dado ";
        cin >> lancamentos;

        if( lancamentos == 0)
            break;

        for(i= 0; i<lancamentos; i++){

            x = (rand() % 6) + 1;
            for( j=0; j<6; j++){
                if (x == j+1) { dado[j]++; }
            }

        }
		
		cout << "\n Faces\t    Aparicoes\t    Porcentagem" << endl;
		for( j = 0; j < 6; j ++){
			int p = (dado[j]*100)/lancamentos;
			cout << "Face " << j+1 << ":\t\t" << dado[j] <<  "\t\t" << p << "%" << endl ;
		}
		
		cout << endl << endl;
	}

	return 0;
}
