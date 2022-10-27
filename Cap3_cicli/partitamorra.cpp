#include <iostream>
#include <math.h>
using namespace std;

int main(){

    string a,b,c,d,s;
    
        
		
	do
		{cout<<"Primo utente(carta, forbice o sasso)\t";
        cin>>a;
        cout<<endl,
        cout<<"Secondo utente(carta, forbice o sasso)\t";
        cin>>b;
        cout<<endl;
        if(a=="carta"&&b=="forbice")
        {
        	 cout<<"Vince il secondo utente"<<endl;
		}
        else if(a=="forbice"&&b=="forbice")
        {
        	 cout<<"Pareggio"<<endl;
		}
		else if(a=="forbice"&&b=="carta")
        {
        	 cout<<"Vince il primo utente"<<endl;
		}
        else if(a=="sasso"&&b=="forbice")
        {
        	cout<<"Vince il primo utente"<<endl;
		}
		else if(a=="carta"&&b=="sasso")
        {
        	cout<<"Vince il primo utente"<<endl;
		}
		else if(a=="sasso"&&b=="sasso")
        {
        	 cout<<"Pareggio"<<endl;
		}
		else if(a=="carta"&&b=="carta")
        {
        	 cout<<"Pareggio"<<endl;
		}
		else if(a=="forbice"&&b=="sasso")
        {
        	 cout<<"Vince il secondo utente"<<endl;
		}
		else if(a=="sasso"&&b=="carta")
        {
        	 cout<<"Vince il secondo utente"<<endl;
		}
		cout<<"Digitare S o s per proseguire con un''altra mano\t";
        cin>>s;
		}
	while((s=="S")||(s=="s"));
		
			return 0;
		
        
        



}
