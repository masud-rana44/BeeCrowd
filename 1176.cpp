#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, i, a[61];

    cin >> t;

      a[0] = 0;
      a[1] = 1;

    for(i=2; i<=60; i++){
        a[i] = a[i-2] + a[i-1];
    }


    int x[t];

    for(i=0; i<t; i++){
        cin >> x[i];
    }


    for(i=0; i<t; i++){
    cout << "Fib(" << x[i] << ") = " << a[x[i]] << endl;
    }

    return 0;
}

