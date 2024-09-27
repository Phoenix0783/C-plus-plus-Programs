#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers to find out which one is the largest."<<"\n";
    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    cout<<"Number 3: ";
    cin>>c;

    if(a>=b){
        if(a>=c){
            cout<<"Number "<<a<<" is the largest.";
        }else{
            cout<<"Number "<<c<<" is the largest.";
        }
    }else{
        if(b>=c){
            cout<<"Number "<<b<<" is the largest.";
        }else{
            cout<<"Number "<<c<<" is the largest.";
        }
    }
}