#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Give a Number : ";
//     cin>>n;
//     if(n%2==0)
//         cout<<"The Number is Even";
//     else
//         cout<<"The Number is Odd";

// }

// Take a Positive Int input and tell if it is divisible by 5 or not.

int main(){
    int x;
    cout<<"Give a Number : ";
    cin>>x;

    if(x%5==0){
        cout<<"The Number is Divisible by 5";
    }else{
        cout<<"The Number is not Divisible by 5";
    }
}