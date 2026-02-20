#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    if(a>b){ //a>b
        if(a>c){ // a>b>c
            cout<<a<<" is greatest number";
        }
        else{ // c>a  so c>a>b
            cout<<c<<" is greatest number";
        }
    }
    else{ //b>a
        if(b>c){ // b>a>c
            cout<<b<<" is greatest number";
        }
        else{ // c>b and b>a   so c>b>a
            cout<<c<<" is greatest number";
        }
        
    }

}