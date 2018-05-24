#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int s[100],n,i,count=0;
    cin>>n;
    
if((n<=100000)&&(n>=1))
{
    for(i=0;i<=n;i++)
    {
        cin>>s[i];
    }
}
else
{
    cout<<"Invalid input";
}
for(i=0;i<n;i++)
    {
        if(s[i]==i)
        {
       cout<<s[i]<<" ";
        }
        else
        {
            count++;
        }
       
    }
    if(count==n)
    {
        cout<<"-1";
    }
}
