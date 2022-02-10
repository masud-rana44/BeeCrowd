#include<bits/stdc++.h>
using namespace std;

int main(){
        int d;
        cin >> d;

        int year = d / 365;
        int month = (d - year*365) / 30;
        int day = d - ((year*365)+(month*30));

        cout << year << " ano(s)" << endl;
        cout << month << " mes(es)" << endl;
        cout << day << " dia(s)" << endl;

        return 0;
}
