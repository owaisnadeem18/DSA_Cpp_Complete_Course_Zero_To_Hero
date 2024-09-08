// #include <iostream>
// using namespace std;

// int main()
// {
//     // Write a program to print the following pattern

//     // 1 2 3 4
//     // 1 2 3 4
//     // 1 2 3 4
//     // 1 2 3 4

//     int n = 14;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << j + 1 << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // Write a program to print the following pattern

    // A B C D
    // A B C D
    // A B C D
    // A B C D

    int n = 9;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {

            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}