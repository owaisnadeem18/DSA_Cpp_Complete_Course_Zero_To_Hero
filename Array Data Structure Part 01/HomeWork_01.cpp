#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // Now you are required to only print the index at which the largest or smallest array number is present

    int arr[7] = {
        0,
        1,
        2,
        3,
        4,
        5,
        6,
    };

    int size = sizeof(arr) / sizeof(arr[0]);

    int largest_num = INT_MIN;

    int smallest_Num = INT_MAX;

    int smallest_index = -1;
    int largest_index = -1;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < smallest_Num)
        {
            smallest_Num = arr[i];
            smallest_index = i;
        }

        if (arr[i] > largest_num)
        {
            largest_num = arr[i];
            largest_index = i;
        }

        // smallest_Num = max(smallest_Num, arr[i]);
    }

    cout << "The index of largest num is : " << largest_index << endl;
    cout << "The index of smallest num is : " << smallest_index << endl;

    return 0;
}