#include<bits/stdc++.h>
using namespace std;

int main()
{
    double Salary;
    cin >> Salary;

    cout << fixed << setprecision(2);

    if(Salary>=0.00 && Salary<=2000.00){
        cout << "Isento" << endl;
    }
    else if(Salary>=2000.01 && Salary<=3000.00){
        cout << "R$ " << (Salary-2000)*0.08 << endl;
    }
    else if(Salary>=3000.01 && Salary<=4500.00){
        cout << "R$ " << (Salary - 3000)*0.18 + (1000*0.08) << endl;
    }
    else if(Salary>=4500.01){
        cout << "R$ " << (Salary - 4500)*0.28 + (1500*0.18) + (1000*0.08) << endl;
    }


    return 0;
}
