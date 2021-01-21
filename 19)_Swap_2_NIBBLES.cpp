#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    int shift_l=0x0f;
    int shift_r=0xf0;
    
    printf("%x",(((number&shift_l)<<4))|((number&shift_r)>>4));
}

int main() 
{
    int number=0x59;;
    
    printf("Initial Number\nNumber1 = %X\n",number);

    cout<<"\nAfter Swapping 2 NIBBLES"<<endl;
    solve(number);
    
    return 0;
}

/*                  OUTPUT
    Initial Number
    Number1 = 59
    
    After Swapping 2 NIBBLES
    95
*/
