#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter age of Ram : ";
    cin>>a;
    cout<<"Enter age of Shyam : ";
    cin>>b;
    cout<<"Enter age of Ajay : ";
    cin>>c;
    if(a<b){ // a>b
        if(a<c){ // a>b>c
            cout<<a<<" is Youngest";
        }
        else{ // c<a and a<b so c<a<b
            cout<<c<<" is Youngest";
        }
    }
    else{ // b<a
        if(b<c){ // b<a<c
            cout<<b<<" is Youngest";
        }
        else{ // c<b and b<a   so c<b<a
            cout<<c<<" is Youngest";
        }
        
    }

}