

#include <iostream>
#include <curses.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(void)
{
    int NumeroDePalpites=0;
    int PALPITE;
    int x;
    srand(time(0));
    x = 1 + (rand()%100);

    do{
        NumeroDePalpites = NumeroDePalpites + 1;
        cout << "DIGITE SEU PALPITE > ";
        cin >> PALPITE;
        if(PALPITE == x){
            if(NumeroDePalpites>5){
            	cout << "\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>FINALMENTE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;    
            }
            cout << "\n\t>>>>>>>>>>>>>>>.PARABENS, VOCE ACERTOU!.<<<<<<<<<<<<<<<";
        }else{
            if(NumeroDePalpites==5){
            	cout << "\n\tCARA COMO VC EH RUIM\n";
            }
            if(NumeroDePalpites==6){
           	cout << "\n\tERROU FEIO, ERROU RUDE\n";
            }
            if(NumeroDePalpites==7){
            	cout << endl << "\tDESISTE LOGO, PO"<< endl;
            }
            if(NumeroDePalpites>8){
            	cout << endl << "O NUMERO EH 8 PO"<< endl;
            }
            if(PALPITE > x){
                cout << "MUITO ALTO, TENTE OUTRA VEZ!";
            }else{
                cout << "MUITO BAIXO,TENTE OUTRA VEZ";
            }
        }
    }while(PALPITE != x);

    cout << "\t#################.NUMERO DE PALPITES = " << NumeroDePalpites << " .###################" <<endl<<endl<<endl;
    
    return 0;
}




