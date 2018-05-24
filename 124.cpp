#include <iostream>

using namespace std;

int main()
{
  int n,i,x,j;
  cin>>n;
  if(n<=1000)
  {
  for(i=n;i>0;i--)
  {
      x=i*1;
      for(j=x;j>0;j--)
      {
          cout<<"1"<<" ";
      }
      cout<<"\n";
  }
  }
  else
  {
      cout<<"Invalid input";
  }

    return 0;
}
