#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, sum = 0;
    int n = 0;

    for(int i=1; i<=6; i++){
        cin >> a;
        if(a>0){
            n++;
            sum = sum + a;
        }
    }

    cout << n << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum/n << endl;
    return 0;
}
