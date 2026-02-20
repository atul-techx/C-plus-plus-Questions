#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter n : ";
    cin>>n;
    // Run loop 100 Times

    // for(i=1; i<=n; i++){ 
    //     if(i%2!=0){
    //         cout<<i<<" ";
    //     }
    //     else;  
    // }

    //Run loop 50 Times

    for(i=2; i<=n; i=i+2){
        cout<<i<<" ";
    }
}