#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2, 4, 8, 12, 16};

    cout<<"Actual array sequence:"<<"\n";
    
    int sizeOfArray = sizeof(arr)/ sizeof(arr[0]);
    for(int i =0;i<sizeOfArray;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Array in Reverse"<<"\n";
    for(int j =sizeOfArray-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
}

