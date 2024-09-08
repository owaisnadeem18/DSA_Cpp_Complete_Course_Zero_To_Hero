// #include <iostream>
// using namespace std;

// int main()
// {
//     // Reverse Triangle Pattern Questions

//     // Print the following patterns

//     // 1
//     // 2 1
//     // 3 2 1
//     // 4 3 2 1
//     // 5 4 3 2 1

//     int n = 5;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Reverse Triangle Pattern Questions

//     // Print the following patterns (Floyd's Triangle Pattern)

//     // 1
//     // 2 3
//     // 4 5 6
//     // 7 8 9 10

//     int n = 10;
//     int num = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     // Print the following patterns (Floyd's Triangle Pattern Alphabets version)

//     // A
//     // B C
//     // D E F
//     // G H I J

//     int n = 4;
//     char alphabet = 'A';

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << alphabet << " ";
//             alphabet++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    // Print the following patterns (Floyd's Triangle Pattern Reverse Alphabets version)

    // A
    // B A
    // C B A
    // D C B A

    int n = 4;

    for (int i = 0; i < n; i++)
    {

        char alphabet = 'A' + i;
        for (int j = i + 1; j > 0; j--)
        {
            cout << alphabet << " ";
            alphabet--;
        }

        cout << endl;
    }

    return 0;
}