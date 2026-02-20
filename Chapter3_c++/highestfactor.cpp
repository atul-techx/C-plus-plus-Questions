#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter n : ";
    cin>>n;

    for(i=n/2; i>=1; i--){
        if(n%i==0){
            cout<<i<<" ";
            break;
        }
    }
}
