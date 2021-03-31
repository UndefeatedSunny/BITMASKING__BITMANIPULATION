#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    int shift = 1;
    
    while(shift <= number)
    {
        number ^= shift;
        
        shift = shift << 1;
    }
    
    cout<<"After TOGGLE all Bits\nNumber => "<<number<<"\n\n";
}

int main() 
{
    int number;
    while(cin>>number)
    {
        cout<<"Before TOGGLE all Bits\nNumber => "<<number<<endl;
        solve(number);
    }  
    return 0;
}

/////////////////////////////////////////////////////  METHOD 2  ///////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    int i=0;
    int n=number;           // So that number will RESERVED for FURTHER Comparision.
    while((n)>=(1<<i))
    {
        number^=(1<<i);
        i++;
    }
    cout<<"After TOGGLE all Bits\nNumber => "<<number<<"\n\n";
}

int main() 
{
    int number;
    while(cin>>number)
    {
        cout<<"Before TOGGLE all Bits\nNumber => "<<number<<endl;
        solve(number);
    }  
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*  
                    INPUT
    10
    5
    15

                    OUTPUT
    Before TOGGLE all Bits
    Number => 10
    After TOGGLE all Bits
    Number => 5
    
    Before TOGGLE all Bits
    Number => 5
    After TOGGLE all Bits
    Number => 2
    
    Before TOGGLE all Bits
    Number => 15
    After TOGGLE all Bits
    Number => 0
*/
