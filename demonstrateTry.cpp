// Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    try
    {
        if(num == 0){
          throw "Dot'n take zero as input!";
        }

        if(num>=1 && num<=9){
          throw num;
        }

        cout<<"fine with "<<num<<endl; 
    }
    catch (const char *str)
    {
        cout<<str<<endl;
    }
    catch (int n)
    {
        cout<<n<<" is single digit number which is not allowed!"<<endl;
    }
    
    cout<<"Great"<<endl;
    return 0;
}