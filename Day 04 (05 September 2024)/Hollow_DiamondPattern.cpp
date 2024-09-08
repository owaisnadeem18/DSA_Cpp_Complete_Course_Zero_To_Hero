// #include <iostream>
// using namespace std;

// int main()
// {
//     //    *
//     //   * *
//     //  *   *
//     // *     *
//     // *     *
//     //  *   *
//     //   * *
//     //    *

//     // Print this hollow diamond pattern problem

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // Let's solve this problem into chunks , the first chunk is

    //    *
    //   * *
    //  *   *
    // *     *

    int n = 4;

    for (int i = 0; i < n; i++)
    {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {

            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) // 2nd outer loop
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}