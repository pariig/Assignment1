#include <iostream>
using namespace std;
int main()
{
  int n,b=0,c;
  cin>>n;
  while(n>0)
{
  c=n%10;
  b=b*10+c;
  n=n/10;
}
  cout<<'reverse of number is'<<b;
}
