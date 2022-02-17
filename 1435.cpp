#include <bits/stdc++.h>
using namespace std;

int main() {

while(1){
    int n;
    cin >> n;
    if(n==0)
        break;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            int left = col;
            int right = n+1-col;
            int up = row;
            int down = n+1-row;
            cout << setw(3) << min(min(left, right), min(up, down));
            if(col==n)
                    continue;
            cout <<" ";
        }
        cout << endl;
    }

    cout << endl;
}
 
    return 0;
}