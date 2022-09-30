// Write a C++ program to accept area pin code and throw an exception if it does not
// contain 6 digits.

#include <iostream>
using namespace std;

int main()
{
    int pin,temp; int digit = 0;
    cout << "Enter your mobile number" << endl;
    cin>>pin;
    temp = pin;

    try
    {
        while (temp)
        {
            int r = temp % 10;
            temp /= 10;
            digit++;
        }
        if (digit <=5 || digit >= 7)
        {  
            throw "Invalid pin code";
        }
        cout << "pin code is : " << pin << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    return 0;
}