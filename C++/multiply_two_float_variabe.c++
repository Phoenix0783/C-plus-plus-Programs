#include <iostream>

using namespace std;

float mul_float_numbers(float a, float b){ return a*b; }

int main(){
    float a= 12.59,b=23.45,product;

    product = mul_float_numbers(a,b);

    cout<<"Product of two float variables is "<<product;

    return 0;
}