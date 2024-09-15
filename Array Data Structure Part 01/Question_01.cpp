// #include <iostream>
// #include <climits>

// using namespace std;

// int main()
// {

//     // Find the maximum and the minimun number from an array

//     int arr[5] = {5, 2, 90, 32, -12};

//     int size = sizeof(arr) / sizeof(arr[0]);

//     int smallest = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }

//     cout << "smallest number from an array is : " << smallest << endl;

//     return 0;
// }

// Or There is another way to write the above code

#include <iostream>
#include <climits>

using namespace std;

int main()
{

    // Find the maximum and the minimun number from an array

    int arr[5] = {5, 2, 90, 32, -12};

    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "smallest number from an array is : " << smallest << endl;
    cout << "Largest number from an array is : " << largest << endl;

    return 0;
}
