#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y, min, hour;
    cin >> a >> x >> b >> y;

    if(a>b && x>y){
        hour = ((24-a)+b)-1;
        min = (60-x)+y;
    }
    else if(a<b && x>y){
        hour = (b-a)-1;
        min = (60-x)+y;
    }
    else if(a>b && x<y){
        hour = ((24-a)+b)+1;
        min = y-x;
    }
    else if(a<b && x<y){
        hour = b-a;
        min = y-x;
    }
    else if(a<b && x==y){
        hour = b-a;
        min = 0;
    }
    else if(a>b && x==y){
        hour = (24-a)+b;
        min = 0;
    }
    else if(a==b && x<y){
        hour = 0;
        min = y-x;
    }
    else if(a==b && x>y){
        hour = 23;
        min = (60-x)+y;
    }
    else if(a==b && x==y){
        hour = 24;
        min = 0;
    }


    cout << "O JOGO DUROU " << hour <<" HORA(S) E " << min <<" MINUTO(S)" << endl;

    return 0;
}
