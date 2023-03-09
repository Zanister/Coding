#include <iostream>
using namespace std;

int main ()
{
    int i,n,count=0;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (n<0)
    {
        cout << "Inalid Input! Enter a positive integer: ";
        cin >> n;
    }
    for (i=1; i<n; i++)
    {
        if (n%i==0)
        {

            cout << i << " is perfectly divisible by "<< n<< endl;
            count = count + i;
        }

    }
    cout << "Sum of divisors is " << count << endl;
    if (count == n)
    {
        cout<< n << " is a perfect number"<< endl;
    }
    else
    cout << n << " is not a perfect number";

    return 0;
    
    
    

}