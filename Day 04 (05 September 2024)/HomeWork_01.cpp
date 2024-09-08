#include <iostream>
using namespace std;

int main()
{
    // You have to write a program through which you can print the following pattern

    // A B C
    // D E F
    // G H I

    int n = 3;

    char alphabet = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << alphabet << " ";
            alphabet++;
        }
        cout << endl;
    }

    return 0;
}