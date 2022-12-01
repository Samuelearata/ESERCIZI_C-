#include <iostream>
using namespace std;
int main(){
    char a,b;
    cout <<"inserire l ' iniziale della giocata"<<endl;
    cout << "Player 1 inserisci la prima giocata"<<endl;
    cin >> a;
    cout << "player 2 inserisci la seconda giocata"<<endl;
    cin >> b;
    if (a==b){
        cout << "game pareggiato" <<endl;
    }
    else {
        if(a == 'f' && b == 'c'){
            cout << "player 1 ha vinto";
        }
        if(a=='c' && b == 's'){
        cout << "player 1 ha vinto"<<endl;
        }
        if (a=='s'&& b == 'f'){
            cout << "player 1 ha vinto"<<endl;
        }
        if(a == 'f' && b == 's'){
            cout << "player 2 ha vinto";
        }
        if(a=='c' && b == 'f'){
        cout << "player 2 ha vinto"<<endl;
        }
        if (a=='s'&& b == 'c'){
            cout << "player 2 ha vinto"<<endl;
        }

        

    }
        
return 0;
}