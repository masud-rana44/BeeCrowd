#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int n, sum = 1;

    cin >> n;

    for(int i = n; i>=1; i--){
     sum *= i;
    }

    cout << sum << endl;

    return 0;
}