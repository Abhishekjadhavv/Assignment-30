// Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.

#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    char c;
    cout<<"Enter an operator"<<endl;
    cin >> c;

    try
    {
        if (num2 == 0 && c=='/')
            throw "divide by zero error encountered!";

        switch (c)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            throw "Invalid Operator";
        }
        cout << "Result : " << result << endl;
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    cout << "Great work" << endl;

    return 0;
}