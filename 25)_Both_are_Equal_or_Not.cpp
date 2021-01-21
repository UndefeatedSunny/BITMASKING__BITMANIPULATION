#include<bits/stdc++.h>
using namespace std;

void solve(int number1, int number2)
{
    int count=0;
    
    if(number1^number2)
    {
        cout<<"Not Equal"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }
}

int main() 
{
    int number1=0x12345678;
    int number2=0x87654321;
    int number3=0x12345678;
    
    printf("Initial Number's\nNumber1 = %x\n",number1);
    printf("Number2 = %x\n",number2);
    printf("Number3 = %x\n",number3);
    
    cout<<"\nBoth are Equal or Not ?"<<endl;
    solve(number1,number2);
    solve(number1,number3);
    
    return 0;
}

/*                  OUTPUT
    Initial Number's
    Number1 = 12345678
    Number2 = 87654321
    Number3 = 12345678
    
    Both are Equal or Not ?
    Not Equal
    Equal
*/
