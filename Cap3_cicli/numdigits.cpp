#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a,b,c,d,s;
    
    cout<<"Inserire numero\t";
    cin>>a;
    cout<<endl;
       
    do
    {
      a=a/10;
      c=c+1;
	}
	while(a>0);
   		cout<<"E' composto da "<<c<<" cifre";
		
return 0;
		
}
