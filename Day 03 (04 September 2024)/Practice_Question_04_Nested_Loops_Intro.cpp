#include <iostream>
using namespace std;

int main()
{
    // Write a program to print the following pattern

    // *
    // **
    // ***
    // ****
    // *****

    // We have to use nested loops in order to print the above pattern

    for (int i = 0; i < 5; i++)
    {
        string word = "";

        for (int j = 0; j <= i; j++)
        {
            word += "*";
        }
        cout << word << endl;
    }

    return 0;
}