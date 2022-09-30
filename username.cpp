// Write a C++ program to accept a username f the userniame has less than 6 characters
// or does contain any digit or special symbol

#include <iostream>
using namespace std;

int main()
{
    char username[100];
    int count = 0, k = 1;

    cout << "Enter user name" << endl;
    cin >> username;

    try
    {
        for (int i = 0; username[i]; i++)
        {
            count = count + 1;
            if (username[i] >= 'a' && username[i] <= 'z' || username[i] >= 'A' && username[i] <= 'Z')
            {
                k = 1;
            }
            else if (username[i] >= '0' && username[i] <= '9')
            {
                k = 0;
                break;
            }
            else
            {
                k = 0;
                break;
            }
        }
        if (count <= 5 && k == 1)
            throw "user name must be at least 6 characters";

        if (k == 0)
            throw "Digits and special symbols  are not allowed";

        cout << "User name is " << username << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }
    return 0;
}
