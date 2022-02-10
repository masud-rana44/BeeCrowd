#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x[100];
    int i;

    for(i=0; i<100; i++)
    {
        cin >> x[i];
    }

    for(i=0; i<100; i++)
    {
        if(x[i]<=10)
        cout <<fixed << setprecision(1) << "A[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
