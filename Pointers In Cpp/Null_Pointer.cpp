#include <iostream>
using namespace std;

int main()
{
    // here I wanna initialize a pointer variable

    // int *ptr = NULL;

    int *ptr = nullptr; // Pointer ko null initialize kiya

    if (ptr == nullptr)
    {
        cout << "Pointer is null!" << endl;
    }
    cout << ptr;

    return 0;
}
