#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, R1, R2;
    cin >> a >> b >> c;

    if((((b*b)-4*a*c)<0) || a==0 || b==0 || c==0){
        cout << "Impossivel calcular" << endl;
    }

    else{
        R1 = (-b + sqrt((b*b)-4*a*c))/(2*a);
        R2 = (-b - sqrt((b*b)-4*a*c))/(2*a);

    cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
    cout << fixed << setprecision(5) << "R2 = " << R2 << endl;
    }

    return 0;
}
