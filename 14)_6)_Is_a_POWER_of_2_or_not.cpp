#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    if(number==0)
    {
        cout<<"No"<<endl;
        return;
    }
    else
    {
        while(number != 1)
        {
            if((number%2) != 0)
            {
                cout<<"No"<<endl;
                return;
            }
            
            number /= 2;
        }
        cout<<"Yes"<<endl;
        return;
    }
}

int main() 
{
    int number1=256;
    int number2=31;
    int number3=1024;
    
    cout<<"INITIAL VALUES"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    cout<<"Number3 = "<<number3<<"\n\n";
    
    cout<<"Is a POWER of 2 ?"<<endl;
    solve(number1);
    solve(number2);
    solve(number3);
    
    return 0;
}

/*                  OUTPUT
    INITIAL VALUES
    Number1 = 256
    Number2 = 31
    Number3 = 1024
    
    Is a POWER of 2 ?
    Yes
    No
    Yes
*/
