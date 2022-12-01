#include <iostream>
using namespace std;
int main() {
    int temp;
    cout << "inserisci la temperatura"<<endl;
    cin >> temp;
    switch (temp){
        case temp<=-20 && temp <= 0;
        cout << "freddo dannato"<<endl;
        break;
        case temp<=1 && temp<=15;{
        cout << "freddo"<< endl;
        break;
        }
        case temp<=16 && temp <= 23
        cout << "normale"<<endl;
        break;
        case temp<=24 && temp <=30
        cout << "caldo"<<endl;
        break;
        case temp<=31 && temp <= 40
        cout << "caldo da morire"<<endl;
        break;
        case temp<-20 || temp>40
        cout << "termometro rotto"<< endl;
    default:
        cout << "inserisci la temperatura"<<endl;
    }
  return 0;
       
}