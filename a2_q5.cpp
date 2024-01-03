#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1 ; i<= n-2 ; i++){
     //space
     for(int j = n-2-i ; j >=1 ; j--){
        cout<<"  ";
     }
     //star
     for(int j = 1 ; j<=2*i-1 ; j++){
        cout<<"* ";
     }
     //space
     for(int j = n-2-i ; j>=1 ; j--){
        cout<<"  ";
     }

cout<<endl;
}
for(int i = 1 ; i<=n-3 ; i++){
   
    for(int j = 1 ; j<= i ; j++){
        cout<<"  ";
    }
   
    for(int j = n-2*i ; j>=1 ; j--){
        cout<<"* ";
    }
   
    for(int j = 1 ; j<= i ; j++){
        cout<<"  ";
    }
cout<<endl;
}

    }
}
