#include<iostream>
using namespace std;

int main(){
    int cp;
    cout<<"Enter Cost prize : ";
    cin>>cp;
    int sp;
    cout<<"Enter Selling prize : ";
    cin>>sp;

    if(cp<sp){
        cout<<"Seller has made "<<sp-cp<<" Rupees profit";
    }
    else if(cp>sp){
        cout<<"Seller has incurred "<<cp-sp<<" Rupees loss";
    }
    else{
         cout<<"No profit & No loss";
    }

}