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
            if(row==col)
                    cout << setw(3) << 1;
            else if(row>col)
                    cout << setw(3) << row-col+1;
            else
                    cout << setw(3) << col-row+1;

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