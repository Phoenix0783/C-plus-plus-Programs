#include<iostream>

using namespace std;

float FtoC(float n){
    return (n - 32.0)*5.0 / 9.0;
}

int main(){
    float fahrenhiet;
    float result;

    cout<<"Enter Farenhiet value: ";
    cin>>fahrenhiet;
    cout<<endl;
    result = FtoC(fahrenhiet);
    cout<<result;
}