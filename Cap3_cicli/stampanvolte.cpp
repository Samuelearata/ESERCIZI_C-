#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int n,i;
	string l;
	cout<<"Inserire il numero di ripetizioni \t";
	cin>>n;
	cout<<"Inserire una lettera \t";
	cin>>l;
	for(i=0;i<n;i++)
	{
		cout<<l<<endl;
	}
	
	return 0;
}
