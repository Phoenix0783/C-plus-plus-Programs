#include <iostream>

using namespace std;

int addTwoNumber(int a, int b){
    return a+b;
}

int main(){
    int a=343,b=234424;
    int i;
    cout<<"Enter a value: ";
    cin>>i;
    cout<<"You entered "<<i;
    cout<<endl;
    cout<<addTwoNumber(a,b);
}