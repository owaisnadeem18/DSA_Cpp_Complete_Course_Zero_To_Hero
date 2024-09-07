#include <iostream>
using namespace std;

int main()
{
    // Find the sum of n natural numbers

    int n;
    cout << "Please Enter a number ";
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        count += i;
    }

    cout << "The sum of Natural Numbers is " << count;

    return 0;
}