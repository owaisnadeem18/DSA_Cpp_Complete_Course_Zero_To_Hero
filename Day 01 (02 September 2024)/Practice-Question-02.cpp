#include <iostream>
using namespace std;

int main()
{
    // Find out whether the number is prime or not

    int num = 11;
    bool isPrime = true;

    // Check for 0 or 1
    if (num == 0 || num == 1)
    {
        cout << "Number is not prime" << endl;
        return 0;
    }

    // Loop to check divisibility
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false; // Number is divisible, hence not prime
            break;
        }
    }

    // Output the result
    if (isPrime)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is a composite, non-prime number" << endl;
    }

    return 0;
}
