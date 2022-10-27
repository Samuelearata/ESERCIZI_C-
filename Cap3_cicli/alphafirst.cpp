#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	string l,m;
	
	do{
		
		cout<<"Inserire una lettea maiuscola e per stoppare inserirne una minuscola\t";
		cin>>l;
		if(l<m)
		{
		
			m=l;

		}
		
		}
	while((l>="A")&&(l<="Z"));
	
	
	
	cout<<"La lettera mmaiuscola piu' piccole e' "<<m<<endl;

	return 0;
}
