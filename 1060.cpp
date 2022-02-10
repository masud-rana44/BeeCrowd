#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    int sum = 0;

    for(int i=1; i<=6; i++){
        cin >> a;
        if(a>0){
            sum++;
        }
    }

    cout << sum << " valores positivos" << endl;
    return 0;
}
