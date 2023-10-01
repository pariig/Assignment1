#include <iostream>
using namespace std;
int main() {
{
    int m,n,i;
    int gcd=1,lcm=1;
    cin>>m>>n;
    for(i=1;i<1000;i++)
    {
        if(( m%i==0)&&(n%i==0))
        {
            gcd=i;
        }
    }
    lcm=(m*n)/gcd;
    cout<<'gcd'<<gcd;
    cout<<'lcm'<<lcm;
    
}
}
