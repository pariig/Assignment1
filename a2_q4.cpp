#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int spaces=1;
        while(spaces<i){
            cout<<" "<<" ";
            spaces++;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<"*"<<" ";
            j++;
            
        }
        cout<<endl;
    }
}
