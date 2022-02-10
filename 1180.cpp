#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, p=0;
    cin >> a;
    int x[a];
    int min = 99999999;


    for(int i=0; i<a; i++){
        cin >> x[i];

        if(min>x[i]){
            min = x[i];
            p = i;
        }
    }

    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << p << endl;

    return 0;
}