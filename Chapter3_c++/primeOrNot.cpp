#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter n : ";
    cin>>n;

    bool flag = true; //true means prime

    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag = false; //false means composite
            break; // to get out of the loop
        }
    }
    if(n==1)
    cout<<"The no. is Neither composite nor prime";
    else if(flag==true)
    cout<<"The no. is prime";
    else
    cout<<"The no. is composite";

}