#include <iostream>
using namespace std;

int main()
{
    int n,i,j,flag = 0,count=0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: ";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            flag++;
        }
        if (flag == 0)
        {
                cout << "Unique element: "<<arr[i]<<endl;
                count++;
        }
    }
    cout <<"No of Unique elements: "<< count;

}
