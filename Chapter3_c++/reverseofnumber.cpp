#include<iostream>
using namespace std;
int main(){
    int ld,n,rev=0;
    cout<<"Enter a Number : ";
    cin>>n;

    while(n!=0){
        ld=n%10;
        rev*=10;
        rev+=ld;
        n = n/10;
        
       
    }
   
    cout<<"The Reverse of Digits is : "<<rev<<endl;

}
