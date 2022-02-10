#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    float t1, t2, t3;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> t1 >> t2 >> t3;
        cout <<fixed << setprecision(1) << (t1*2 + t2*3 + t3*5)/10 << endl;
    }

    return 0;
}
