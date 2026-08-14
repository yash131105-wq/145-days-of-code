#include<iostream>
using namespace std;
int main(){
     float a,b;
     char ch;
    cout<<"Enter the first num: ";
    cin>>a;
    cout<<"Enter the second num: ";
    cin>>b;
    cout<<"Enter the operation: ";
    cin>> ch;
    if( ch == '+') cout<<"The sum is: "<< a + b;
    if( ch == '-') cout<<"The difference is: "<< a - b;
    if( ch == '/') cout<<"The quotient is: "<< a / b;
    if( ch == '*') cout<<"The product is: "<< a * b;
    /* MISTAKE: I've written ch = '+' and  instead of ch == '+' .
    This instructs the compiler that `assign` the special characters yourself and therefore it runs
    everyline of the code.*/
    
}
