// Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter.

#include <iostream>
using namespace std;

int main()
{
    char pass[50];
    int len = 0, lowerCase = 1, digit = 1, specialChar = 1, capitalLetter = 1;
    cout << "Enter password" << endl;
    cin >> pass;

    try
    {
        for (int i = 0; pass[i]; i++)
        {
            len = len + 1;
            if (pass[i] >= 'a' && pass[i] <= 'z')
            {
                lowerCase = 0;
            }
            else if (pass[i] >= 'A' && pass[i] <= 'Z')
            {
                capitalLetter = 0;
            }
            else if (pass[i] >= '0' && pass[i] <= '9')
            {
                digit = 0;
            }
            else
            {
                specialChar = 0;
            }
        }
         
        if(len<=5){
          throw "Password must be at least 8 characters";
        } 

        if (lowerCase == 1 || capitalLetter == 1 || digit == 1 || specialChar == 1)
        {
            throw "Invalid password : password at least contain one digit,special character,capital letter and one small letter";
        }

        cout<<"Password is "<<pass<<endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    return 0;
}