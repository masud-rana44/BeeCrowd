#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, e = 0, o = 0, p = 0, n = 0;

    for(int i=1; i<=5; i++){
        cin >> a;
        if(a%2==0)
            e++;
        if(a>0){
            p++;
            if(a%2==1)
                o++;
        }
        if(a<0){
            n++;
            if(a%2==-1)
                o++;
        }
    }

    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;
    return 0;
}
