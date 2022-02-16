#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
     cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        int sum = 0;
     for(int j=1; j<a; j++){
         if(a%j==0)
            sum = sum + j;
     }
    if(a==sum)
            cout << a << " eh perfeito" << endl;
    else
            cout << a << " nao eh perfeito" << endl;
    }


    return 0;
}