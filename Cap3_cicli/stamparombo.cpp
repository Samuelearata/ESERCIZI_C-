#include <iostream>

using namespace std;

int main()
    {	
    
    int n;
    cout<<"Inserire una cifra"<<endl;
    cin>>n;
    for(int i=0;i<2*n+1;i++)
        {
            for(int e=0;e<2*n+1;e++)
            {
            if (e<n-i)
            { 
            cout<<"*";
            }
            else
            cout<<" ";
            }
            

            cout<<endl;
        }
        
    for(int f=0;f>=n;f--)
        {
            for(int a=0;a>=f;a--)
            {
            if (a>f)
            {
            cout<<"*";
            }
            else
            cout<<" ";
            }
        

            cout<<endl;
        }
            

    return 0;
    }
