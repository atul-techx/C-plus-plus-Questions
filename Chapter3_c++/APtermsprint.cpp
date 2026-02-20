#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter n : ";
    cin>>n;
    // 1 3 5 7 9 ...
    for(i=1; i<=2*n-1; i+=2){ 
        cout<<i<<" ";
    }
}