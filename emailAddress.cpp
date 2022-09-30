// Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.

#include <iostream>
using namespace std;

int main()
{
    char email[100];
    int k = 0;
    try
    {
        cout << "Enter a Email" << endl;
        cin.getline(email, 100);

        for (int i = 0; email[i]; i++)
        {
            if (email[i] == '@')
            {
                k = 1;
                break;
            }
        }

        if (k == 0)
            throw "Please enter valid email";

        cout <<"Valid Email" << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }
    return 0;
}