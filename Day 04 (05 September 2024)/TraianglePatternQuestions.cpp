// #include <iostream>
// using namespace std;

// int main()
// {
//     // Traingle Problems

//     // Question 01:

//     // Print the following triangle pattern

//     // 1
//     // 2 2
//     // 3 3 3 3
//     // 4 4 4 4 4

//     int n = 14;

//     int number = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << number << " ";
//         }

//         cout << endl;
//         number++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Traingle Problems

//     // Question 02:

//     // Print the following triangle pattern

//     // *
//     // * *
//     // * * *
//     // * * * *
//     // * * * * *

//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i + 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // Traingle Problems

    // Question 02:

    // Print the following triangle pattern

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    int n = 5;
    char alphabet = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << alphabet << " ";
        }
        alphabet++;
        cout << endl;
    }

    return 0;
}