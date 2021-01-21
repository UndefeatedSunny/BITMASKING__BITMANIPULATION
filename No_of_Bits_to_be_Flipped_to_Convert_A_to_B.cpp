#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    int count=0;
    
    while(number != 0)
    {
        number &= (number-1);
        count++;
    }
    
    printf("%d\n\n",count);
}

int main() 
{
    int number1=0x12345678;
    int number2=0x87654321;

    printf("Initial Number\nNumber1 = %x\n",number1);
    printf("Number2 = %x\n",number2);
    
    cout<<"\nNo. of Bits to be Flipped to Convert A to B"<<endl;
    solve(number1^number2);

    return 0;
}

/*                  OUTPUT
    Initial Number
    Number1 = 12345678
    Number2 = 87654321
    
    No. of Bits to be Flipped to Convert A to B
    14
*/
