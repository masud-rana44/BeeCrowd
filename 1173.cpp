#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[10], i, a;
    cin >> a;

    for(i=0; i<10; i++)
    {
        x[i] = a;
        a = 2 * a;
    }

    for(i=0; i<10; i++)
    {
        cout << "N[" << i << "] = " << x[i] << endl;
    }

    return 0;
}

