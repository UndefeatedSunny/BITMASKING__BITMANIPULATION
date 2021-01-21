#include<bits/stdc++.h>
using namespace std;

void solve(unsigned int number)
{
    for(unsigned int i=1<<31;i>0;i/=2)
    {
        (i & number)?(cout<<"1"):(cout<<"0");
    }
    cout<<endl;
}

int main() 
{
    unsigned int number1=15;
    unsigned int number2=0x8;
    unsigned int number3=0x5;
    
    printf("Initial Number's\nNumber1 = %X\n",number1);
    printf("Number2 = %x\n",number2);
    printf("Number3 = %x\n",number3);
    
    cout<<"\nBINARY Representation"<<endl;
    solve(number1);
    solve(number2);
    solve(number3);
    
    return 0;
}

/*                  OUTPUT
    Initial Number's
    Number1 = F
    Number2 = 8
    Number3 = 5
    
    Both are Equal or Not ?
    00000000000000000000000000001111
    00000000000000000000000000001000
    00000000000000000000000000000101
*/
