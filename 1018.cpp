#include<bits/stdc++.h>
using namespace std;

int main()
{
    int taka;

    cin >> taka;

    cout << taka << endl;
    int count = taka / 100;
    cout << count << " nota (s) de R$ 100,00 " << endl;
    taka = taka - (count * 100);

    count = taka / 50;
    cout << count << " nota (s) de R$ 50,00 " << endl;
    taka = taka - (count * 50);

    count = taka / 20;
    cout << count << " nota (s) de R$ 20,00 " << endl;
    taka = taka - (count * 20);

    count = taka / 10;
    cout << count << " nota (s) de R$ 10,00 " << endl;
    taka = taka - (count * 10);

    count = taka / 5;
    cout << count << " nota (s) de R$ 5,00 " << endl;
    taka = taka - (count * 5);

    count = taka / 2;
    cout << count << " nota (s) de R$ 2,00 " << endl;
    taka = taka - (count * 2);

    count = taka / 1;
    cout << count << " nota (s) de R$ 1,00 " << endl;

    return 0;
}
