#include<iostream>
using namespace std;
int main(){
    int i,a,n;
    cout<<"Enter n : ";
    cin>>n;
    a = 3;
    // GP  3,12,48...
    for(i=1; i<=n; i++){
        cout<<a<<" ";
        a = a*4;
    }
}