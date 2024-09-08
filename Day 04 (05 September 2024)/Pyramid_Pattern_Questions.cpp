// #include <iostream>
// using namespace std;

// int main()
// {
//     // We have to print the following pyramid pattern

//     //   1
//     //  121
//     // 12321
//     // 1234123

//     int n = 4;

//     for (int i = 0; i < n; i++) // Outer Loop
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         // for nums

//         for (int j = 1; j <= i + 1; j++)
//         {
//             cout << j;
//         }

//         for (int j = i; j > 0; j--)
//         {
//             cout << j;
//         }

//         cout << endl;
//     }
//     return 0;
// }

// Breaking the pattern into some small chunks

// The Original Pattern is

//    1
//   121
//  12312
// 1234123

// #include <iostream>
// using namespace std;

// int main()
// {
//     // In this first chunk of code , you simply need to print the following pattern

//     //    1
//     //   12
//     //  123
//     // 1234

//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         int num = 1;

//         // First print the spaces

//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j <= i; j++)
//         {
//             cout << num;
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Now let's talk about the next chunk

//    1
//    2 1
//    3 2 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 3;

//     for (int i = 0; i < n; i++)
//     {
//         int num = i + 1;

//         for (int j = 0; j <= i; j++)
//         {
//             cout << num;
//             num--;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Now Let's merge all of these chunks of code , in order to solve this complex pattern problem

//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    int n = 8;

    for (int i = 0; i < n; i++)
    { // Outer Loop

        int num = 1;
        // Loop to print the spaces inside the question

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Loop to print the L.H.S of the pattern

        for (int j = 0; j <= i; j++)
        {
            cout << num;
            num++;
        }

        // Loop to print the right hand side of the loop
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
