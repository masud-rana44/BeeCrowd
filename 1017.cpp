#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float time, speed, distance, fuel;

    cout << "Spent time(hours): " << endl;
    cin >> time;

    cout << "Average speed(Km/h): " << endl;
    cin >> speed;

    distance = time*speed;
    fuel = (distance/12);

    cout << "Liters would be needed: "<< fixed << setprecision(3) << fuel;

    return 0;
}
