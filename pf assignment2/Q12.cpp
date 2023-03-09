#include <iostream>
using namespace std;

int main()
{
    int n, large, sec;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements: ";
        cin >> arr[i];
    }
    large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (large < arr[i])
            large = arr[i];
    }
    sec = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (sec < arr[i])
        {
            if (arr[i] != large)
                sec = arr[i];
        }
    }
    cout << "Second Largest Element: " << sec;
    cout << endl;
    return 0;
}
