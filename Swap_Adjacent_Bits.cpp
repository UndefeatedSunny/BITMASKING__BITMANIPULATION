#include<bits/stdc++.h>
using namespace std;

int main() 
{
    unsigned int number = 0x5555AAAA;
    
    cout<<"INITIAL NUMBER"<<endl;
    cout<<"Number = ";
    printf("%x\n",number);

    number = ((number&(0x55555555))<<1|(number&(~(0x55555555)))>>1);            // METHOD-1
    
    cout<<endl<<"AFTER SWAPPING ADJACENT POSITIONS"<<endl;
    cout<<"Number = ";
    printf("%x\n",number);

    cout<<endl<<"AFTER ANOTHER SWAP"<<endl;
    number = ((number&(0x55555555))<<1|(number&(0xAAAAAAAA))>>1);            // METHOD-2
    cout<<"Number = ";
    printf("%x",number);
    
    return 0;
}

/*                  OUTPUT

    INITIAL NUMBER
    Number = 5555aaaa
    
    AFTER SWAPPING ADJACENT POSITIONS
    Number = aaaa5555
    
    AFTER ANOTHER SWAP
    Number = 5555aaaa

*/
