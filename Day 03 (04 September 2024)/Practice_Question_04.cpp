#include <iostream>
using namespace std;

int main()
{

    // Check either a number is a prime or a non prime number

    int number = 4;

    bool isPrime = true;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << number << " Prime Number";
    }

    else
    {
        cout << number << " Non Prime Number";
    }

    return 0;
}