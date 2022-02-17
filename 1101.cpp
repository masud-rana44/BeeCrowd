#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, max, min;

    while(1){
        cin >> a >> b;
        int sum = 0;

        if(a <= 0 || b <= 0) break;

        if(b > a){
            max = b;
            min = a;
        }
        else{
            max = a;
            min = b;
        }

        for(int i = min; i <= max; i++){
            cout << i << " ";
            sum += i;
        }

        cout << "Sum=" << sum << endl;
    }


    return 0;
}