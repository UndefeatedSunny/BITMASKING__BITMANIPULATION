#include<bits/stdc++.h>
using namespace std;

void solve(char* ptr, int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%x ",ptr[i]);
    }
}

int main() 
{
    int number=0x12345678;
    
    printf("Initial Number\nNumber1 = %X\n",number);

    cout<<"\nCompiler Manner of Storing"<<endl;
    solve((char *)&number,sizeof(number));
    
    return 0;
}

/*                  OUTPUT
    Initial Number
    Number1 = 12345678
    
    Compiler Manner of Storing
    78 56 34 12 
*/
