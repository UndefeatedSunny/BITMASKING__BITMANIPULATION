#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    int shift=1;
    
    while(number & shift)
    {
        number ^= shift;
        shift <<= 1;
    }
    
    number ^= shift;
    
    cout<<"Number = "<<number<<endl;
}

int main() 
{
    int number1=15;
    int number2=32;
    int number3=99;
    
    cout<<"INITIAL VALUES"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    cout<<"Number3 = "<<number3<<"\n\n";
    
    cout<<"AFTER ADDING 1"<<endl;
    solve(number1);
    solve(number2);
    solve(number3);
    
    return 0;
}

/*                  OUTPUT
    INITIAL VALUES
    Number1 = 15
    Number2 = 32
    Number3 = 99
    
    AFTER ADDING 1
    Number = 16
    Number = 33
    Number = 100
*/
