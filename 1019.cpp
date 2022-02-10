#include<bits/stdc++.h>
using namespace std;

int main(){
        int sec;
        cin >> sec;

        int hour = sec / 3600;
        int miniute = (sec - hour*3600)/60;
        int secound = sec - (hour*3600 + miniute*60);

        cout <<hour<<":"<<miniute<<":"<<secound<<endl;

        return 0;
}
