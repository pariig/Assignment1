#include<iostream>
using namespace std;
int main()
{
   int num, total=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num>0)
   {
      total++;
      num = num/10;
   }
   cout<<"\nTotal Digits = "<<tot;
   cout<<endl;
   return 0;
}
