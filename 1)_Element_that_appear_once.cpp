#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[11]={1,2,1,2,44,55,55,44,12,121,121};
    
    cout<<"ARRAY ELEMENTS"<<endl;
    
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int ans=0;
    
    for(int i=0;i<11;i++)
    {
        ans ^= arr[i];
    }
    
    cout<<"\n\nElement that appears once => "<<ans<<endl;
    
    return 0;
}

/*                  OUTPUT

    ARRAY ELEMENTS
    1 2 1 2 44 55 55 44 12 121 121 
    
    Element that appears once => 12

*/
