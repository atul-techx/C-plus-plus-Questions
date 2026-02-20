#include<iostream>
using namespace std;
int main(){
    int ld,n,count=0,sum=0;
    cout<<"Enter a Number : ";
    cin>>n;

    while(n!=0){
        ld=n%10;
        n = n/10;
        count++;
        
            sum=sum+ld;
        
        
    }
    cout<<"Digits of the number are : "<<count<<endl;
    cout<<"The sum of Digits is : "<<sum;
}
