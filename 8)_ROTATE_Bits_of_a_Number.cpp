#include<bits/stdc++.h>
using namespace std;

void Lsolve(int number,int shift)
{
    cout<<"After LEFT Shift by "<<shift<<" => ";
    
    printf("%x\n\n",((number<<shift)|(number>>(32-shift))));
}

void Rsolve(int number,int shift)
{
    cout<<"After RIGHT Shift by "<<shift<<" => ";
    
    printf("%x\n\n",((number>>shift)|(number<<(32-shift))));
}

int main() 
{
    int number=0x12345678;

    printf("Initial Number\nNumber = %x\n\n",number);
    
    cout<<"After SHIFTING"<<endl;
    Lsolve(number,4);
    Rsolve(number,4);
    
    return 0;
}

/*                  OUTPUT
    Initial Number
    Number = 12345678
    
    After SHIFTING
    After LEFT Shift by 4 => 23456781
    
    After RIGHT Shift by 4 => 81234567
*/
