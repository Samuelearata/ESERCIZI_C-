//Scrivere un programma che chiede all’utente un numero reale e lo legge.
//Quindi, in cascata (ovvero usando il risultato di ciascuna operazione come argomento per la successiva), lo divide per 4.9, per 3.53 e per 6.9998. Poi, sempre in cascata, moltiplica per 4.9, per 3.53 e per 6.9998.
//Infine confronta il risultato ottenuto con il numero iniziale e se rappresentano due numeri reali diversi stampa "moltiplicare NON \`e l'inverso di dividere".
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "inserisci un numero reale"<<endl;
    cin >> num1,num2;
    num1 = num1/4.9;
    num1 = num1/3.53;
    num1 = num1/6.9998;
    num1 = num1*4.9;
    num1 = num1*3.53;
    num1 = num1*6.9998;
    if (num1 == num2)
    cout << "moltiplicare e` uguale che dividere"<<endl;
    else {
        cout <<"moltiplicare NON \`e l'inverso di dividere"<<endl;
    }
    return 0;
    
}