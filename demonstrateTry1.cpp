// Write a C++ program to demonstrate try, throw and catch statements.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    try
    {
        if (num < 0)
        {
            throw "Negative number is not allowed!";
        }
        else if (num == 0)
        {
            throw "zero is neither positive nor negative!";
        }

        cout << num << " is positive number" << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    cout << "Great Work!" << endl;
    return 0;
}