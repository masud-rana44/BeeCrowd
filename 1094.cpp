#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num, Total = 0, rTotal = 0, cTotal = 0, sTotal = 0;
    char a;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> num >> a;

        if(a == 'R') rTotal += num;
        else if(a == 'C') cTotal += num;
        else if(a == 'S') sTotal += num;
    }

    Total = rTotal + sTotal + cTotal;
    cout << "Total: " << Total << " cobaias" << endl;
    cout << "Total de coelhos: " << cTotal << endl;
    cout << "Total de ratos: " << rTotal << endl;
    cout << "Total de sapos: " << sTotal << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << ((float)cTotal/Total)*100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << ((float)rTotal/Total)*100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << ((float)sTotal/Total)*100 << " %" << endl;

    return 0;
}