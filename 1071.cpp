#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, sum=0;
    cin >> x >> y;

        if(x<y)
        {
            for(int i=x+1; i<y; i++)
                if(i%2==1 || i%2==-1)
                    sum = sum + i;
        }
        if(y<x)
        {
            for(int i=y+1; i<x; i++)
                if(i%2==1 || i%2==-1)
                    sum = sum + i;
        }
        else
            sum = 0;


        cout << sum << endl;

    return 0;
}
