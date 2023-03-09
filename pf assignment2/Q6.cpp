#include <iostream>
using namespace std;

int main()
{
    int sale[5], stars;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter today's sale for store " << i << ": ";
        cin >> sale[i];
    }
    cout << "SALES BAR CHART"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        stars = sale[i] / 100;
        cout << "store " << i << ": ";
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
