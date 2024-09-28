// What are the pointers in Cpp

// Pointers are those special variables in cpp , which are used to store the specific memory address of another variables

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num; // Pointer 'ptr' ko num ka address mil gaya

    cout << "Address of num: " << ptr << endl;         // Pointer mein jo address store hai
    cout << "Value at that address: " << *ptr << endl; // Dereferencing pointer to get the value at the address
    return 0;
}
