#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a,d,c;
    float b;
    string stop;
	  
    do
    {
    cout<<"Inserire un numero\t";
    cin>>a;
    cout<<"Il numero e'\t"<<a<<endl;
    d=d+a;
    cout<<"Per proseguire premere una lettera qualsiasi, per interrompere rispondere no\t"<<endl;
    cin>>a;
    c++;
	}
	while(stop!="no");
	b=d/c;
   		cout<<"La media e' "<<b;
		
return 0;
		
}
