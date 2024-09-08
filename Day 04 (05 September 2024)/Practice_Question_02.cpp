#include <iostream>
using namespace std;

int main()
{

    // Write a program to print the following pattern

    // 1 2 3
    // 4 5 6
    // 7 8 9

    int n = 3;

    int number = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}