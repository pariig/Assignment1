#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool is_prime=true;
    cin>>n;
    if (n==0 || n==1)
    {
        is_prime=false;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            is_prime=false;
            break;

        }
    }
    if (is_prime==true)
        cout<<n<<'is a prime no';
    else
        cout<<n<<'is not a prime no' ;    
        
    return 0;
}
