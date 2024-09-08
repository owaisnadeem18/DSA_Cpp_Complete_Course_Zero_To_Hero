// #include <iostream>
// using namespace std;

// int main()
// {
//     // Print the following inverted traingle pattern

//     // 1 1 1 1
//     //   2 2 2
//     //     3 3
//     //       4

//     int n = 4;
//     int number = 1;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = n; j > i; j--)
//         {
//             cout << number;
//         }
//         cout << endl;
//         number++;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // Print the following inverted traingle pattern

    // A A A A
    //   B B B
    //     C C
    //       D

    int n = 4;
    char alphabet = 'A';

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = n; j > i; j--)
        {
            cout << alphabet;
        }
        cout << endl;
        alphabet++;
    }

    return 0;
}