#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    if(0<=n && 25>=n){
        cout << "Intervalo [0,25]" << endl;
    }
    else if(25.000001<=n && 50>=n){
        cout << "Intervalo (25,50]" << endl;
    }
    else if(50.000001<=n && 75>=n){
        cout << "Intervalo (50,75]" << endl;
    }
    else if(75.000001<=n && 100>=n){
        cout << "Intervalo (75,100]" << endl;
    }
    else{
        cout << "Fora de intervalo";
    }

    return 0;
}
