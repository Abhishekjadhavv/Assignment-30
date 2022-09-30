// Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.

#include <iostream>
using namespace std;

int main()
{
    long long int mobileNumber,temp; int digit = 0;
    cout << "Enter your mobile number" << endl;
    cin>>mobileNumber;
    temp = mobileNumber;

    try
    {
        while (temp)
        {
            int r = temp % 10;
            temp /= 10;
            digit++;
        }
        if (digit <=9 || digit >= 11)
        {  
            throw "Invalid mobile number";
        }
        cout << "Mobile Number is " << mobileNumber << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    return 0;
}