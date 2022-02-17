#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i==1){
            cout << t1;
            if(n==1)break;
            cout << " ";
            continue;
        }
        if(i==2){
            cout << t2;
            if(n==2)break;
            cout << " ";
            continue;
        }
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm;
        if(i==n) break;
        cout << " ";
    }
    cout << endl;

    return 0;
}