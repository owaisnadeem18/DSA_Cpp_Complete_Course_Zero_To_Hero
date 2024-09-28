#include <iostream>
using namespace std;

int main()
{
    int a = 89;
    int *b = &a;
    int **c = &b;

    cout << *b << endl;  // khaali b hota , then value aati jo k memory address hota a variable ka , but now this value will be the actual value of variale (a) because of this (*b)
    cout << **c << endl; // gives the actual value of variable (a)
    cout << b << endl;   // gives the address of (a) variable
    cout << *c << endl;  // gives the address of (a) variable

    return 0;
}