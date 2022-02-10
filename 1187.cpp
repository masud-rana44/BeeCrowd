#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m[12][12]; 
    double s = 0.0;
    char a;

    cin >> a;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 12-i-1; j++)
        {
              if(i<j){
                s = s + m[i][j];
            }
        }
    }



    
    if(a == 'S'){
        cout << fixed << setprecision(1) << s << endl;
    }
    else if(a == 'M'){
        cout << fixed << setprecision(1) << s/30.00 << endl;
    }

    return 0;
}