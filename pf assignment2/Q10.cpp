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

    for (int j = 0; j < n; j++)
    {
        for (int i = j+1; i < n; i++)
        {
            if (arr[j] >= arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "SORTED ARRAY(Ascending): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}