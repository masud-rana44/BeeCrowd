#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, y, z, area;
    cin >> x >> y >> z;

    if(x + y > z && y + z > x && z + x > y)
    {
        cout << fixed << setprecision(1) << "Perimetro = " << x + y + z << endl;
    }
    else{
        area = ((x + y) / 2) * z;
        cout << fixed << setprecision(1) << "Area = " << area << endl;
    }

    return 0;
}
