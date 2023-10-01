include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int div=2;div<n;div++){
        while (num%div==0){
            num/=div;
            cout<<div<<" ";
        }
    }
    if(n!=1){
        cout<<num<<endl;
    } 
}

