// Maximum Subarray Sum

#include <iostream>

#include <climits>

using namespace std;

int main()
{
    // Maximum Subarray Sum

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = sizeof(arr) / sizeof(arr[0]);
    int max_Sum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            max_Sum = max(currSum, max_Sum);
        }
    }

    cout << "The Maximum sub array is : " << max_Sum << endl;

    return 0;
}