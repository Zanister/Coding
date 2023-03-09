#include <iostream>
using namespace std;

int main ()
{
    float i,n,j,k;
    cout << "Enter the meal charges ";
    cin >> i;
    n = 6.75/100 * i;
    j = 15.0/100 * i;
    k = i + n + j;
    cout << "Meal cost: " << i << "\n";
    cout << "Tax on meal: " << n << "\n"; 
    cout << "Ammount of tip: " << j << "\n";
    cout << "Total Amount: " << k << "\n";


}