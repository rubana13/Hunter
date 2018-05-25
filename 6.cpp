#include <iostream>
using namespace std;

int main() {
    
  int arr[100],i,j,count=0,n;
  cin>>n;
  if((n>=1)&&(n<=10000))
  {
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  }
  else
  {
      cout<<"Invalid output";
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
            if (i != j && arr[i] == arr[j])
            {
               count=1;
               break;
            }
      }
    if(count==1)
      {
           cout<<arr[i];
           break;
      } 
   
}         
if(count==0)
    {
        cout<<"Unique";
    }
}
