#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    cout<<(number&(number-1))<<endl;
}

int main() 
{
    int number1=8;
    int number2=15;
    
    cout<<"INITIAL VALUES"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<"\n\n";
    
    cout<<"AFTER Turn-off RightMost SET Bit"<<endl;
    solve(number1);
    solve(number2);
    
    return 0;
}

/*                  OUTPUT
    INITIAL VALUES
    Number1 = 8
    Number2 = 15
    
    AFTER Turn-off RightMost SET Bit
    0
    14
*/
