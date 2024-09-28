#include <iostream>
using namespace std;

int main()
{
    // Any of the pointer which is used to store the memory address of another pointer is called as pointer to pointer (concept)

    int a = 78;
    int *ptr = &a;
    int **parentPtr = &ptr;

    cout << a;
    cout << &a << endl; // (both of them have the smae result , means they have the address of the variable)

    cout << ptr << endl; // (both of them have the smae result , means they have the address of the variable )

    cout << *ptr;

    return 0;
}