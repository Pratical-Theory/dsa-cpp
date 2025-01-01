#include <iostream>

using namespace std;

int main()
{
    int i = 3;

    // A pointer to variable i or "stores the address of i"
    int *ptr = &i;

    // A reference (or alias) for i
    int &ref = i;

    // A copy of the value of i
    int value = i;

    i = 10;

    cout << "*ptr = " << *ptr << endl;
    cout << "*ptr = " << ptr << endl;
    cout << "ptr address= " << &ptr << endl;
    cout << "&ref = " << ref << endl;
    cout << "value = " << value << endl;
    cout << "i  = " << i << endl;
    cout << "i address= " << &i << endl;

    // Explanation:
    // ref is a reference to i, meaning it is an alias for i. 
    // Any changes to i will be reflected in ref because they are the same variable.
    
    // value is a separate variable that was initialized with the value of i at the time of assignment.
    // Changes to i do not affect value because value is an independent copy.

    // ptr is a pointer to i, meaning it stores the address of i.
    // Dereferencing ptr (*ptr) gives the value stored at the address of i.
    // When i is changed, the value at the address stored in ptr also changes.

    // Real-life examples:
    // Pointers are used for dynamic memory allocation, such as creating data structures like linked lists and trees.
    // References are often used in function parameters to avoid copying large amounts of data.

    // Difference between * and &:
    // * is used to declare a pointer and to dereference a pointer to access the value at the address it points to.
    // & is used to get the address of a variable and to declare a reference.
}