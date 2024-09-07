#include <iostream>
using namespace std;

int main()
{
    // Find the either a number entered by the user is in upper case or in lower case

    char num;
    cout << "Please Enter an alphabet " << endl;
    cin >> num;

    if (num >= 65 && num <= 90)
    {
        cout << "The number entered by the user is in upper case";
    }

    else if (num >= 97 && num <= 122)
    {
        cout << "The number entered by the user is in lower case";
    }

    else
    {
        cout << "Please enter a valid alphabet number";
    }

    return 0;
}