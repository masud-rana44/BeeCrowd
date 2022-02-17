#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x >> y;

        if(y == 0) cout << "divisao impossivel" << endl;
        else{
            cout << fixed << setprecision(1) << (float)x/y << endl;
        }
    }

    return 0;
}