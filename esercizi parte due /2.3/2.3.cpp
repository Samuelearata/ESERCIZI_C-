#include <iostream>
using namespace std;

int main(){
    int v1,v2,v3;
    float temp;
    cout << "inserire primo valore reale"<<endl;
    cin >> v1;
    cout << "inserire secondo valore reale"<<endl;
    cin >> v2;
    cout << "inserire terzo valore reale"<<endl;
    cin >> v3;
    if (v1<v2){
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
    if (v1<v3){
        temp = v1;
        v1 = v3;
        v3 = temp;
    }
    if (v2<v3){
        temp = v2;
        v2 = v3;
        v3 = temp; 
    }
    cout << "I valori in ordine decrescente: " << v1 << " > " << v2 << " > " << v3 << endl;	
    return 0;
}
