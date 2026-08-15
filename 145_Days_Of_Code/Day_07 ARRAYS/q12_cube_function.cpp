#include<iostream>
#include<cmath>
using namespace std;

float cbr(int b){
    return cbrt(b); 
     
}
int main(){
    int a;
    cout<<"Enter the input: ";
    cin>>a;
    cout<<"The cube root of the num is: "<<cbr(a);
    
}