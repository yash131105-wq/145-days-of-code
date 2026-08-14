#include<iostream>
#include<cmath>
using namespace std;

int sqr(int b){
    return sqrt(b); 
     
}
int main(){
    int a;
    cout<<"Enter the input: ";
    cin>>a;
    cout<<"The square root of the num is: "<<sqr(a);
    
}