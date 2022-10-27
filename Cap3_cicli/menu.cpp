#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int a,b,c,d,e,f;
	string l;
	cout<<"Premere 1 per la prima scelta \t"<<endl;
	cout<<"Premere 2 per la seconda scelta \t"<<endl;
	cout<<"Premere 3 per la terza scelta \t"<<endl;
	cout<<"Premere 4 per la quarta scelta \t"<<endl;
	
	cout<<"Inserire una scelta \t";
	cin>>a;
	if(a>=0&&a<4)
	{ 
		if(a==1)
		{
			cout<<"Hai scelto la prima scelta \t";
		}
		if(a==2)
		{
			cout<<"Hai scelto la seconda scelta \t";
		}
		else if(a==3)
		{
			cout<<"Hai scelto la terza scelta \t";
		}
		else
		{
			cout<<"Hai scelto la quarta scelta \t";
		}
	}
	else
	cout<<"La scelta selezionata non e'valida \t";
	return 0;
}
