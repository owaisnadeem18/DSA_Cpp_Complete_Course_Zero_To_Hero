#include <iostream>
using namespace std;

int main()
{
    // Here we have to write a program through which we can find the sum of n natural numbers

    int n = 5;

    int sum = 0;

    for (int i = 0; i <= n; i++)

    {
        sum += i;
    }

    cout << "sum = " << sum << endl;
}