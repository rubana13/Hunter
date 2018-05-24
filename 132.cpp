#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    int x,n,i,sum=0;
	cin>>s;
n=s.length();
if(n<=100000)
{
for(i=0;i<s[i];i++)
{
x=int(s[i]);
sum=sum+x;
}
cout<<sum;
}
else
{
    cout<<"Invalid input";
}
}
