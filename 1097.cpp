#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b = 7;

   for(int i = 1; i <= 5; i++){
       for(int j = 0; j < 3; j++){
            cout << "I=" << a <<" J=" << b << endl;
            b--;
       }
       a += 2;
       b += 5;
   }

    return 0;
}