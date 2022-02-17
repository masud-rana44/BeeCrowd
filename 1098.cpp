#include <bits/stdc++.h>
using namespace std;

int main() {
    float a = 0;

       float b = 0;
   for(int i = 1; i <= 11; i++){
       for(int j = 1; j <= 3; j++){
            b++;
            cout << "I=" << a <<" J=" << b << endl;
       }
            b = b + .2 - 3;
       a += .2;
   }

    return 0;
}