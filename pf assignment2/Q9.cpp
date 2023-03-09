#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    cout << "Enter the integer to scan: ";
    cin >> n;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    cout << n << " occurs " << count << " times";
}