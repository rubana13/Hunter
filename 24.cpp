#include <iostream>
#include <string>
using namespace std;

int main()
{
   int a[100],n,k,i,j,count=0;;
   cin>>n;
   cin>>k;
   if((n>=1)&&(n<=100000))
   {
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   }
   else{
       cout<<"Invalid input";
   }
   for(i=0;i<n;i++)
   {
       for(j=1;j<n;j++)
       {
           if((a[i]!=k)&&(a[i]!=a[j])&&(a[i]+a[j]==k))
           {
               cout<<"yes";
               count=1;
               break;
           }
       }
       if(count==1)
           {
               break;
           }
   }
    if(count==0){
       cout<<"no";
    }
}
