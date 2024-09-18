// #include <iostream>
// using namespace std;

// int main()
// {
//     // Pair Sum (An Array is given to you and a target . You have to find the target sum by adding the pair of array )

//     int arr[] = {2, 7, 15, 12};
//     int target = 17;
//     int sum = 0;

//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < size; i++)
//     {
//         // Check if there is a pair that adds up to the target

//         for (int j = i + 1; j < size; j++)
//         {
//             sum = arr[i] + arr[j];
//             if (sum == target)
//             {
//                 cout << "Pair found at index " << i << " and " << j << " and the sum is " << sum << endl;
//                 return 0;
//             }
//         }
//     }

//     cout << "No pair found!" << endl;

//     return 0;
// }

// The Time complexity for this above mentioned code is O(n^2).

// I want to reduce this time complexity as O(n) by using a single loop function

#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{

    vector<int> ans;
    int i = 0;
    int size = arr.size();
    int j = size - 1;

    while (i < j)
    {
        int pairSum = arr[i] + arr[j];

        // If pair sum is greator than target than we have to back track our j by writing j-- inside it.

        if (pairSum > target)
        {
            j--;
        }

        // If pair sum is smaller than target than we have to forward track our i by writing i++ inside it.

        else if (pairSum < target)
        {
            i++;
        }

        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{
    vector<int> arr = {2, 7, 15, 12};
    int target = 9;

    vector<int> ans = pairSum(vector<int>(arr), target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}