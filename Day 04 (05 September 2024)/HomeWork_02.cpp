#include <iostream>
using namespace std;

int main()
{

    // You have to write a program through which you can print the following pattern

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int number = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}