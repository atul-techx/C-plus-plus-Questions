#include<iostream>
using namespace std;

// int main (){
//     float x,y;
//     char op;
//     cout<<"Enter 1st Number : ";
//     cin>>x;
//     cout<<"Enter Operation who you want to perform : ";
//     cin>>op;
//     cout<<"Enter 2nd Number : ";
//     cin>>y;
    
//     if(op=='+') cout<<x+y;
//     if(op=='-') cout<<x-y;
//     if(op=='*') cout<<x*y;
//     if(op=='/') cout<<x/y;
// }

// By Switch Statement

int main (){
    float x,y;
    char op;
    cout<<"Enter 1st Number : ";
    cin>>x;
    cout<<"Enter Operation : ";
    cin>>op;
    cout<<"Enter 2nd Number : ";
    cin>>y;
 
    switch(op){
        case '+':
            cout<<"The Add of these numbers is : "<<x+y<<endl;
            break;
        case '-':
            cout<<"The Add of these numbers is : "<<x-y<<endl;
            break;
        case '*':
            cout<<"The Add of these numbers is : "<<x*y<<endl;
            break;
        case '/':
            cout<<"The Add of these numbers is : "<<x/y<<endl;
            break;
        default:
            cout<<"Invalid Operator";

    }
}