// Maximum Subarray Sum

#include <iostream>
using namespace std;

int main()
{
    // Maximum Subarray Sum

    // int arr[] = {4, 2, 5, 2, 1, -8, 9};
    int arr[] = {
        1,
        2,
        3,
        4,
        5,
    };

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}