#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements: ";
        cin >> arr[i];
    }

    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    cout << "SORTED ARRAY(Descending): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}