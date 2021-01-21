#include<bits/stdc++.h>
using namespace std;

void solve(int number, int pos, int value)
{
    int shift=0xff;
    
    printf("%x",(((~(shift<<(4*pos)))&number)|(value<<(4*pos))));
}

int main() 
{
    int number=0x12345678;;
    
    printf("Initial Number\nNumber1 = %X\n",number);

    cout<<"\nAfter REPLACEMENT"<<endl;
    solve(number,2,0x99);
    
    return 0;
}

/*                  OUTPUT
    Initial Number
    Number1 = 12345678
    
    After REPLACEMENT
    12349978
*/
