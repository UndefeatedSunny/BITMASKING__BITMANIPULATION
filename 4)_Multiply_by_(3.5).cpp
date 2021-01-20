#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    cout<<((number<<1)+number+(number>>1))<<endl;
}

int main() 
{
    int number1=5;
    int number2=10;
    
    cout<<"INITIAL VALUES"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<"\n\n";
    
    cout<<"AFTER MULTIPLY 3.5"<<endl;
    solve(number1);
    solve(number2);
    
    return 0;
}

/*                  OUTPUT
    INITIAL VALUES
    Number1 = 5
    Number2 = 10
    
    AFTER MULTIPLY 3.5
    17
    35
*/
