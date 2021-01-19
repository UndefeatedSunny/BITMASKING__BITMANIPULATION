#include<bits/stdc++.h>
using namespace std;

void solve(int number)
{
    if(number==0)
    {
        cout<<"All Bits are NOT SET"<<endl;
        return;
    }
    if((number&(number+1))==0)
    {
        cout<<"All Bits are SET"<<endl;
    }
    else
    {
        cout<<"All Bits are NOT SET"<<endl;
    }
}

int main() 
{
    int number;
    while(cin>>number)
    {
        solve(number);
    }
    
    return 0;
}

/*  
                    INPUT
    14
    15
    16
    31
    0
                    OUTPUT

    All Bits are NOT SET
    All Bits are SET
    All Bits are NOT SET
    All Bits are SET
    All Bits are NOT SET
*/
