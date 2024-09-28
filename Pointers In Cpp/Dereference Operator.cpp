#include <iostream>
using namespace std;

int main()
{
    int num = 20;
    int *ptr = &num; // Pointer ptr stores the address of num

    cout << "Address of num: " << ptr << endl;                    // Address stored in the pointer
    cout << "Value of num using dereferencing: " << *ptr << endl; // Dereferencing gets the value
    return 0;
}
