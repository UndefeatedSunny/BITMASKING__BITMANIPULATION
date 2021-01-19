#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int number=3;  // 0011
    
    int bit_pos=2;                              // Bit on which operation is going to performed.
    cout<<((1<<bit_pos)|number)<<endl;          // Set Particular Bit
    
    bit_pos=1; 
    cout<<((~(1<<bit_pos))&number)<<endl;       // Unset Particular Bit
    
    bit_pos=2; 
    cout<<((1<<bit_pos)^number)<<endl;          // Toggle Particular Bit
    
    bit_pos=1; 
    cout<<((number>>bit_pos)&1)<<endl;          // Status of Particular Bit
    
    int bit_value0=0;       // Value=0
    int bit_value1=1;       // Value=1
    
    bit_pos=3; 
    cout<<(((~(1<<bit_pos))&number)|(bit_value1<<bit_pos))<<endl;   // Change Single Bit at particular Position.
    
    bit_pos=0; 
    cout<<(((~(1<<bit_pos))&number)|(bit_value0<<bit_pos))<<endl;
    
    return 0;
    
}

/*                  OUTPUT

    7
    1
    7
    1
    11
    2

*/
