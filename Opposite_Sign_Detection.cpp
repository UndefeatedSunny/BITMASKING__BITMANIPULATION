#include<bits/stdc++.h>
using namespace std;

void solve(int number1, int number2)
{
    if((number1^number2)>>31)                // ((number1>>31)^(number2>>31))
    {
        cout<<"Not Same SIGN"<<endl;
    }
    else
    {
        cout<<"Same SIGN"<<endl;
    }
}

int main() 
{
    int number1=1995;
    int number2=-1994;
    int number3=12345;
    
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    cout<<"Number3 = "<<number3<<"\n\n";
    
    solve(number1,number2);
    solve(number1,number3);
    
    return 0;
}

/*                  OUTPUT
    Number1 = 1995
    Number2 = -1994
    Number3 = 12345
    
    Not Same SIGN
    Same SIGN
*/
