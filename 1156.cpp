#include <bits/stdc++.h>
using namespace std;

int main() {
    float a = 3, b = 2;
    float sum = 1;

    sum += (a/b);

    for(int i = 1; i <= 19; i++){
            a += 2;
            b *= 2;
            sum  += (a/b);
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}