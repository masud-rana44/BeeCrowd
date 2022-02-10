#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, x[100];

    cin >> a;

    for(int i=0; i<100; i++){
        x[i] = a;
        a = a/2;
    }

    for(int i=0; i<100; i++){
        cout << fixed << setprecision(4) << "N[" << i << "] = " << x[i] << endl;
    }

    return 0;
}