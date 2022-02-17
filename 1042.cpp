#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if(y > x && z > x){
        if(y > z)
            cout << x << endl << z << endl << y << endl;

         else
            cout << x << endl << y << endl << z << endl;
    }

    else if(x > y && z > y){
        if(x < z)
            cout << y << endl << x << endl << z << endl;

        else
            cout << y << endl << z << endl << x  << endl;
    }
    else{
        if(x < y)
            cout << z << endl << x << endl << y << endl;
        else
            cout << z << endl << y << endl << x << endl;
    }

    cout << endl << x << endl << y << endl << z << endl;

    return 0;
}
