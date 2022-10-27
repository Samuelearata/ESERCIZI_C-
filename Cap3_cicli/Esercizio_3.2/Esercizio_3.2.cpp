//Scrivere un programma che legge lettere maiuscole finché l’utente non inserisce un carattere che non è una lettera maiuscola
//e stampa la prima in ordine alfabetico
#include <iostream>
using namespace std;


int main()
{
   char first;
    do{
        cout << "inserisci una lettera maiuscola" << endl;
        cin >> first;
    
    }
    while(first<'A'||first >'Z');
    char F = 'Z';
    do{ 
        if(F <first){
            first = F;
        }
        cout << "inserisci una lettera maiuscola"<<endl;
        cin >> F;
        } while(F>='A'&&  F<='Z');
            cout << "la lattera più piccola e`" << first <<endl;

            return 0;
    }
    

