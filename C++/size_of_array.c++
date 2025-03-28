#include<iostream>
using namespace std; 

int main(){

    int numberOfElements;
    cout<<"Enter number of elements: ";
    cin >>numberOfElements;

    cout<<"Enter elements"<<"\n";

    int arr[numberOfElements];
    
    for(int i = 0;i<numberOfElements;i++){
        cout<<"Element "<<i+1<<" =";
        cin>>arr[i];
    }
    cout<<sizeof(arr[numberOfElements]);
}