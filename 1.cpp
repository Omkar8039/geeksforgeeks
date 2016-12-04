#include<bits/stdc++.h>
using namespace std;
int multipleof3(int n)
{
  int odd=0,even=0;
  if(n==0)
  return 1;
  if(n==1)
  return 0;
  if(n<0)
  n=-n;
  while(n)
  {
    if(n&1)
    odd++;
    n=n>>1;
    if(n&1)
    even++;
    n=n>>1;

  }
  return multipleof3(abs(odd-even));
}
int main()
 {
   int n;
   cin>>n;
   if(multipleof3(n))
   cout<<"Yes"<<"\n";
   else
   cout<<"No"<<"\n";

 }
