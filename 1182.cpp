#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m[12][12]; 
    int l;
    double s = 0.0;
    char a;

    cin >> l >> a;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int j = 0; j < 12; j++)
    {
        s = s + m[j][l];
    }

    
    if(a == 'S'){
        cout << fixed << setprecision(1) << s << endl;
    }
    else if(a == 'M'){
        cout << fixed << setprecision(1) << s/12.00 << endl;
    }

    return 0;
}