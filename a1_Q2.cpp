#include<iostream>
using namespace std;

    int main(){

        int marks;
        cout<<"Enter marks"<<endl;
        cin>marks;

        if(marks>90){
            cout<<"excellent"<<endl;
        }
        if(marks>80&marks<=90){
            cout<<"good"<<endl;
        }
        if(marks>70&marks<=80){
            cout<<"fair"<<endl;
         }
        if(marks>60&marks<=70){
            cout<<"meets expectations"<<endl;
        }
        if(marks<=60){
            cout<<"below par"<<endl;
        }
    }
