#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,s=0;
  cout<<"entr the number"<<endl;
  cin>>n;
  for(int i=2;i<sqrt(n);i++)
  {
   if(n%i==0)
    s++;
    }
    if(s==1)
     cout<<"not prime";
     else
      cout<<"prime";
      }
