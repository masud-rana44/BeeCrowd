#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, sum = 0;

    for(int i=1; i<=5; i++){
        cin >> a;
        if(a%2==0){
            sum++;
        }
    }

    cout << sum << " valores pares" << endl;
    return 0;
}
