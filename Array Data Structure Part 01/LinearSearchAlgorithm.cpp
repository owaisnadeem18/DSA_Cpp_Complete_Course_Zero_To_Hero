#include <iostream>
using namespace std;

int main()
{

    // Linear Search Algorithm in cpp

    // To find out any target number in a loop could be considered as the linear search algorithm in a code

    int arr[] = {5,
                 2,
                 90,
                 32,
                 12,
                 95};

    int targetNum = 2;

    int size = sizeof(arr) / sizeof(arr[0]);

    bool targetFound = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == targetNum)
        {
            int index = i;
            cout << "target number " << targetNum
                 << " exists on index : " << index;
            targetFound = true;
            break;
        }
    }

    if (!targetFound)
    {
        int notfound = -1;
        cout << notfound << endl;
    }

    return 0;
}