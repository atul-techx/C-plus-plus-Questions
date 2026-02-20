#include<iostream>
using namespace std;
int main(){
    float l,b,A,P;
    cout<<"Enter the length of Rectangle : ";
    cin>>l;
    cout<<"Enter the Breath of Rectangle : ";
    cin>>b;

    A=l*b;
    P=2*(l+b);

    if(A>P){
        cout<<"The Area of rectangle is greater then the Perimeter";
    }else{
        cout<<"Perimeter is greater then Area";
    }

}