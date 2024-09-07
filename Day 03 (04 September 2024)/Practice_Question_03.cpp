#include <iostream>
using namespace std;

int main()
{
    // Sum of All odd numbers from 1 to N

    int n = 5;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            count += i;
        }
    }

    cout << "The sum of all odd numbers from 1 to " << n << " is " << count << endl;

    return 0;
}