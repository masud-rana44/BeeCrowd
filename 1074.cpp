#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;

        if(a%2==0 && a<0)
            cout << "EVEN NEGATIVE" << endl;
        else if(a%2==0 && a>0)
            cout << "EVEN POSITIVE" << endl;
        else if(a%2==-1 && a<0)
            cout << "ODD NEGATIVE" << endl;
        else if(a%2==1 && a>0)
            cout << "ODD POSITIVE" << endl;
        else if(a==0)
            cout << "NULL" << endl;
    }

    return 0;
}
