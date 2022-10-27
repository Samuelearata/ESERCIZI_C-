#include <iostream>
using namespace std;

//Scrivere un programma che scrive il fattoriale di un numero chiesto all’utente. Il fattoriale di un numero è definito per
// induzione come 0! = 1 e (n+1)! = (n+1)∗n!. Quindi, ad esempio 3! = (2+1)! = 3∗2! = 3∗(1+1)! = 3∗2∗1! = 3∗2∗(0+1)!=3∗2∗1∗0!=3∗2∗1∗1. Ingeneralen!=n∗(n−1)∗(n−2)∗...∗1.

int main()
{
   int N;
   cout << "inserisci un numero positivo" <<N << endl; 
   cin <<N;
   if (n<0){
    cout << "avevo detto positivo " <<N << endl;
    return 7;
   }
   int F = n;
   for(int i = n-1;i > 1; i--){
    F *=i;
   }
   if(F == 0{
        cout << "il fattoriale di 0 e` 1";
   }else {
        cout << "ïl fattoriale di " <<n ë`<<F;
   }

}
return 0;