#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, mab, m;
    cin >> a >> b >> c;

    mab = ((a+b)+abs(a - b))/2;
    m = ((mab+c)+abs(mab-c))/2;

    cout << m << " eh o maio" << endl;

    return 0;
}
