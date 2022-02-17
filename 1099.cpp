#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, fristNum, lastNum;

    cin >> n;

    for(int i = 1; i <= n; i++){
        int  sum = 0;
        cin >> fristNum >> lastNum;

        if(fristNum < lastNum){
            for(int j = fristNum+1; j < lastNum; j++){
                if(j%2==1)
                    sum = sum + j;
            }
        }
        else if(fristNum > lastNum){
            for(int j = fristNum-1; j > lastNum; j--){
                if(j%2==1)
                    sum = sum + j;
            }
        }

        cout << sum << endl;
    }


    return 0;
}