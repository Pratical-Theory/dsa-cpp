#include <iostream>

using namespace std;

int main()
{
    int num1 = 11;
    int num2 = num1;

    num1 = 22;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}

// num1 = 22
// num2 = 11