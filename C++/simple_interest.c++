#include<iostream>
using namespace std;

int main(){

    float P,R,T;
    float result;

    cout<<"Enter values to calculate Simple Interest"<<"\n";
    cout<<"Principal amount: ";
    cin>>P;
    cout<<"\n";
    cout<<"Time : ";
    cin>>T;
    cout<<"\n";
    cout<<"Rate of Interest: ";
    cin>>R;
    cout<<"\n";

    result = (P * R * T)/100;

    cout<<"Simple Interest = "<<result;
}