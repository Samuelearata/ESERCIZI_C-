//Scrivere un programma che verifica se tre numeri reali dati in input possono essere i lati di un triangolo, cioè se nessuno di essi è maggiore della somma degli altri due o minore del valore assoluto della loro differenza.
#include <iostream>
using namespace std;
#include <cmath>

int main (){
    int L1,L2,L3;
    cout << "inserisci il primo lato"<<endl;
    cin>> L1;
    cout << "inserisci il secondo lato"<<endl;
    cin>> L2;
    cout << "inserisci il terzo lato"<<endl;
    cin>> L3;
    if(L2+L3>L1 || L2-L3>L1)
    cout << "il primo lato non e` un lato di un triangolo"<<endl;
    else{
        cout<<"il primo lato è un lato di un triangolo"<<endl;
    }
    if(L1+L2>L3 || L1-L2>L3)
    cout << "il terzo lato non e` un lato di un triangolo"<<endl;
    else{
        cout<<"il terzo lato è un lato di un triangolo"<<endl;
    }
    if(L1+L3>L2|| L1-L3>L2)
    cout << "il secondo lato non e` un lato di un triangolo"<<endl;
    else{
        cout<<"il secondo lato è un lato di un triangolo"<<endl;
    }
    return 0;
}