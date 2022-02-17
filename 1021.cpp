#include<bits/stdc++.h>
using namespace std;

int main()
{
    float taka;
    int rem;

    cin >> taka;
    cout << fixed << setprecision(2);

    cout << "NOTAS:" << endl;
    int n = taka/100;
    cout << n << " nota(s) de R$ 100.00" << endl;
    rem = (taka%100);
    cout << rem << endl;
    n = taka/50;
    cout << n << " nota(s) de R$ 50.00" << endl;
    taka = taka - n*50;
    n = taka/20;
    cout << n << " nota(s) de R$ 20.00" << endl;
    taka = taka - n*20;
    n = taka/10;
    cout << n << " nota(s) de R$ 10.00" << endl;
    taka = taka - n*10;
    n = taka/5;
    cout << n << " nota(s) de R$ 5.00" << endl;
    taka = taka - n*5;
    n = taka/2;
    cout << n << " nota(s) de R$ 2.00" << endl;
    taka = taka - n*2;

    cout << "MOEDAS:" << endl;
    n = taka/1;
    cout << n << " moeda(s) de R$ 1.00" << endl;
    taka = taka - n*1;
    n = taka/0.5;
    cout << n << " moeda(s) de R$ 0.50" << endl;
    taka = taka - n*.5;
    n = taka/.25;
    cout << n << " moeda(s) de R$ 0.25" << endl;
    taka = taka - n*.25;
    n = taka/.1;
    cout << n << " moeda(s) de R$ 0.10" << endl;
    taka = taka - n*.1;
    n = taka/.05;
    cout << n << " moeda(s) de R$ 0.05" << endl;
    taka = taka - n*.05;
    n = (taka/.01)+.01;
    cout << n << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
