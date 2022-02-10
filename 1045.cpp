#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, temp, temp2;
    cin >> a >> b >> c;

    if(a > b && a > c){
        if(b < c){
           temp = b;
            b = c;
            c = temp;
        }
    }
    else if(b > a && b > c){
        if(a > c){
            temp = a;
            a = b;
            b = temp;
        }
        else{
            temp = a;
            a = b;
            b = c;
            c = temp;
        }
    }
    else{
        if(a > b){
            temp = a;
            temp2 = b;
            a = c;
            b = temp;
            c = temp2;
        }
        else{
            temp = a;
            a = c;
            c = temp;
        }
    }

    if(a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
    else if(a*a == b*b + c*c) cout << "TRIANGULO RETANGULO" << endl;
    else if(a*a > b*b + c*c) cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(a*a < b*b + c*c) cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
    if((a == b && a != c) || (b == c && b != a) || (c == a && c!=b))
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
