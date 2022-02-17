#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxNum, i, position, fn, num;

    cin >> fn;

    maxNum = fn;

    for(i = 1; i < 100; i++){
        cin >> num;

        if(num > maxNum){
            maxNum = num;
            position = i+1;
        }
    } 

    cout << maxNum << endl;
    cout << position << endl;

    return 0;
}