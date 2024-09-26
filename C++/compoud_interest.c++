#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float P,R,T;
    float amount;
    float CI;

    cout<<"Enter values to calculate Compound Interest"<<"\n";
    cout<<"Principal amount: ";
    cin>>P;
    cout<<"\n";
    cout<<"Time : ";
    cin>>T;
    cout<<"\n";
    cout<<"Rate of Interest: ";
    cin>>R;
    cout<<"\n";


    amount = P * ((pow((1+R/100),T)));
    CI = amount - P;

    cout<<"Compound Interest is "<<CI;  
}