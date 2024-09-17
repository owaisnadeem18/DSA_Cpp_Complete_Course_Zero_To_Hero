#include <iostream>
#include <climits>

using namespace std;

int main()
{

    // Kadane's ALgorithm Question to find the maximum sub array

    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int size = sizeof(nums) / sizeof(nums[0]);

    int currSum = 0;
    int maximum_num = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        currSum += nums[i];
        maximum_num = max(currSum, maximum_num);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum Sub Array sum is = " << maximum_num << endl;

    return 0;
}