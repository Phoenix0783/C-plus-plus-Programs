#include<iostream>

using namespace std;

int areaOfRectangle(int lenght, int breadth){
    return lenght * breadth;
}

int perimeterOfRectangle(int lenght, int breadth){
    return 2 * (lenght + breadth);
}

int main(){
    int lenght;
    int breadth;

    cout<<"Enter lenght: ";
    cin>>lenght;
    cout<<"\n";

    cout<<"Enter breadth: ";
    cin>>breadth;
    cout<<"\n";

    cout<<"Area of Rectangle for lenght "<<lenght<<" and breadth "<<breadth<<" = "<<areaOfRectangle(lenght,breadth);
    cout<<"\n";
    cout<<"Perimeter of Rectangle for lenght "<<lenght<<" and breadth "<<breadth<<" = "<<perimeterOfRectangle(lenght,breadth);
}