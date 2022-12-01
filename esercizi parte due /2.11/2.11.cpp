#include <iostream>
using namespace std;
int main (){
    int num;
    cout << "inserisci un numero intero tra 1 e 12"<<endl;
    cin >> num;
    switch(num){
        case 1:
        cout << "gennaio"<<endl;
        break;
        case 2:
        cout<< "febbrario"<<endl;
         break;
        case 3:
        cout<< "marzo"<<endl;
         break;
        case 4:
        cout<< "aprile"<<endl;
         break;
        case 5:
        cout<< "giugno "<<endl;
         break;
        case 6:
        cout<< "luglio"<<endl;
         break;
        case 7:
        cout<< "agosto"<<endl;
         break;
        case 8:
        cout<< "settembre"<<endl;
         break;
        case 9:
        cout<< "ottobre"<<endl;
         break;
        case 10:
        cout<< "novembre"<<endl;
         break;
        case 11:
        cout<< "dicembre"<<endl;
         break;
         defult:
         cout<<"ce la fai ad inserire un cazzo di numero su dai"<<endl;
      

    }
}