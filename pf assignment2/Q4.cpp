#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int speed,hrs,distance;
    cout << "Enter the speed of vehicle(in miles/hr): " ;
    cin >> speed;
    while (speed<0)
    {
        cout << "Invalid speed! Enter again. ";
        cin >> speed;
    }
    cout << "Enter the Hours travelled: ";
    cin >> hrs;
    while (hrs<=0)
    {
        cout << "Invalid Input! Enter hours travelled again: ";
        cin >> hrs;
    }
    ;
    cout << " Hour" << setw(22) <<"Distance Travelled"<< endl;
    cout << "----------------------------------" << endl;
    for (int i = 1; i <= hrs; i++)
    {
        distance = speed * i;
        cout <<setw(11)<<left << i  << distance;
        cout << endl;

    }
    return 0;
    
}
