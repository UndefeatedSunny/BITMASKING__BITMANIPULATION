#include<bits/stdc++.h>
using namespace std;

void count_0(int number)                        // COUNT => { UNSET }
{
    int count0=0;
    
    for(int i=1;i<=number;i=i<<1)
    {
        if((number&i)==0)
        {
            count0++;
        }
    }
    cout<<"No. of UNSET bits => "<<count0<<endl;
}

void count_1(int number)                        // COUNT => { SET }
{
    int count1=0;

    while(number>0)
    {
        number &= (number-1);
        count1++;
    }
    cout<<"No. of SET bits => "<<count1<<endl;
}

int main() 
{
    int number;
    while(cin>>number)
    {
        count_0(number);
        count_1(number);
        cout<<endl;
    }
    
    return 0;
    
}

/*  

                    INPUT
    31
    10
    0
    32
                    OUTPUT

    No. of UNSET bits => 0
    No. of SET bits => 5
    
    No. of UNSET bits => 2
    No. of SET bits => 2
    
    No. of UNSET bits => 0
    No. of SET bits => 0
    
    No. of UNSET bits => 5
    No. of SET bits => 1

*/
