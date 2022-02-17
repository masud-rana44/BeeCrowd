#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 0;
    float sum = 0;

    while(1){
        cin >> n;
        
        if(n<0) break;

        sum += n;
        i++;
    }

    cout << fixed << setprecision(2) << sum/i << endl;

    return 0;
}