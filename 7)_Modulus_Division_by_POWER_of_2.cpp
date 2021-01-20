#include<bits/stdc++.h>
using namespace std;

void solve(int number,int value)
{
    cout<<"Modulus Division by "<<value<<" => ";
    
    cout<<(number & (value-1))<<endl;
}

int main() 
{
    int number=15;

    cout<<"Number = "<<number<<"\n\n";
    
    cout<<"Modulus Division by a Power of 2*(?)"<<endl;
    solve(number,2);
    solve(number,4);
    solve(number,8);
    
    return 0;
}

/*                  OUTPUT
    Number = 15
    
    Modulus Division by a Power of 2*(?)
    Modulus Division by 2 => 1
    Modulus Division by 4 => 3
    Modulus Division by 8 => 7
*/
