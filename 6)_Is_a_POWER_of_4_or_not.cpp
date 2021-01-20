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
            if((number%4) != 0)
            {
                cout<<"No"<<endl;
                return;
            }
            
            number /= 4;
        }
        cout<<"Yes"<<endl;
        return;
    }
}

int main() 
{
    int number1=256;
    int number2=-256;
    int number3=20;
    
    cout<<"INITIAL VALUES"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    cout<<"Number3 = "<<number3<<"\n\n";
    
    cout<<"Is a POWER of 4 ?"<<endl;
    solve(number1);
    solve(number2);
    solve(number3);
    
    return 0;
}

/*                  OUTPUT
    INITIAL VALUES
    Number1 = 256
    Number2 = -256
    Number3 = 20
    
    Is a POWER of 4 ?
    Yes
    No
    No
*/
