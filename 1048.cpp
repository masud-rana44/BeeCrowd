#include<bits/stdc++.h>
using namespace std;

int main()
{
    float s, e;
    int p;
    cin >> s;

    if(0<=s && s<=400){
        e = (s/100)*15;
        p = 15;
    }
    else if(400<s && s<=800){
        e = (s/100)*12;
        p = 12;
    }
    else if(800<s && s<=1200){
        e = (s/100)*10;
        p = 10;
    }
    else if(1200<s && s<=2000){
        e = (s/100)*7;
        p = 7;
    }
    else if(2000<s){
        e = (s/100)*4;
        p = 4;
    }

   cout << fixed << setprecision(2);
   cout << "Novo salario: " << s+e << endl;
   cout << "Reajuste ganho: " << e << endl;
   cout << "Em percentual: " << p << " %" << endl;


    return 0;
}
