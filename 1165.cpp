#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
     cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        bool isPrime = true;
     for(int j=2; j<a; j++){
         if(a%j==0){
            isPrime = false;
            break;
         }
     }
    if(isPrime==false)
            cout << a << " nao eh primo" << endl;
    else if(isPrime==true)
            cout << a << " eh primo" << endl;
    }


    return 0;
}