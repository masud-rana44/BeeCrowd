#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    
    while(1){
        cin >> n;

        if(n == 0) break;

        int sum = 0;

        if(n%2 == 0) sum += n;
        else sum += ++n;

        for(int i=1; i<5; i++){
            n += 2;
            sum += n;
        }
        cout << sum << endl;
    }

    return 0;
}