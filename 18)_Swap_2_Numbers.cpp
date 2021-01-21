#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int number1=55;
    int number2=66;
    
    cout<<"BEFORE SWAPPING"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    
    number1 ^= number2;
    number2 ^= number1;
    number1 ^= number2;
    
    cout<<endl<<"AFTER SWAPPING"<<endl;
    cout<<"Number1 = "<<number1<<endl;
    cout<<"Number2 = "<<number2<<endl;
    
    return 0;
}

/*                  OUTPUT

    BEFORE SWAPPING
    Number1 = 55
    Number2 = 66
    
    AFTER SWAPPING
    Number1 = 66
    Number2 = 55

*/
