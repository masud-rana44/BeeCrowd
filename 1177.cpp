#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j=0, a;
    int x[1000];

    cin >> a;

    for(i=0; i<1000; i++)
    {
        if(j>=a){
            j=0;
        }

            x[i] = j;
            j++;
    }

    for(i=0; i<1000; i++){

        cout << "N[" << i << "] = " << x[i] << endl;
    }
    return 0;
}
