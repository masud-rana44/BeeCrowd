#include <bits/stdc++.h>
using namespace std;

int main() {
    float x, sum = 0, count = 0;

    while(1){
        cin >> x;

        if(x>=0 && x<=10){
            count++;
            sum+=x;

            if(count == 2){
                cout << fixed << setprecision(2) << "media = " << sum/2 << endl;
                break;
            }
        }

        else cout << "nota invalida" << endl;
    }

    return 0;
}