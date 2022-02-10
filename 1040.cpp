#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, avg;
    if(cin >> n1 >> n2 >> n3 >> n4){

    avg = (n1*2+n2*3+n3*4+n4*1)/10;
    cout << "Media: " << avg << endl;

    if(avg>7.0){
        cout << "Aluno aprovado.";
    }
    else if(avg<5.0){
        cout << "Aluno reprovado.";
    }
    else{
        cout << "Aluno em exame.";
    }
    }
    if(cin >> n1 >> n2 >> n3 >> n4 >> n5){
        cout << "Masud Rana";
    }


    return 0;
}
