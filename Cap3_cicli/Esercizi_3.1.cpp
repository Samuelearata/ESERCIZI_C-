//Scrivere un programma che legge un certo numero di valori reali e ne stampa la media (notare che lo schema seguente fissa
//una serie di dettagli ulteriori non specificati nel “testo”

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int how_many;
    float x,sum,i;
    sum = 0;

    cout << "Di quanti numeri vuoi fare la media?" << endl;
    cin >> how_many;
    if(how_many <= 0){
         cout << "Errore: il numero doveva essere positivo" << endl;
         return  42;

    }
for ( i = 0; i < how_many; ++i ){
    cout << " \nInserisci un numero" << endl;
    cin >> x;
    sum = sum+x;
}
    
    cout << "la media è" << sum/how_many << endl;

    return 0;

}
