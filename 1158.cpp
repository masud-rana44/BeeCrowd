#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, x, y;
    cin >> n;
    
    for(int k=1; k<=n; k++){
        cin >> x >> y;

        long long int sum = 0;

        if(x%2 == 0) sum += ++x;
        else sum += x;

        for(int i=1; i<y; i++){
            x += 2;
            sum += x;
        }
        cout << sum << endl;
    }

    return 0;
}