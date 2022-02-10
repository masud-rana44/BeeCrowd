#include<bits/stdc++.h>
using namespace std;

int main()
{
    string temp;
    int d1, h1, m1, s1, d2, h2, m2, s2, day, hour, min, sec;

    cin >> temp >> d1;
    cin >> h1 >> temp >> m1 >> temp >> s1;
    cin >> temp >> d2;
    cin >> h2 >> temp >> m2 >> temp >> s2;


    sec = s2 -s1;
    min = m2 - m1;
    hour = h2 - h1;
    day = d2 - d1;

    if(sec<0){
        sec = sec + 60;
        min--;
    }
    if(min<0){
        min = min + 60;
        hour--;
    }
    if(hour<0){
        hour = hour + 24;
        day--;
    }

    cout << day << " dia(s)" <<endl;
    cout << hour << " hora(s)" << endl;
    cout << min << " minuto(s)" << endl;
    cout << sec << " segundo(s)" << endl;

    return 0;
}
