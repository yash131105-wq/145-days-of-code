#include<iostream>
using namespace std;
int sum(int x, int y){
    return x + y;
}
int main(){
    int a,b;
    cout<<"Enter the first num: ";
    cin>>a;
    cout<<"Enter the second num: ";
    cin>>b;
    sum(a,b);
    cout<<"The sum of the numbers is: "<<sum(a,b);
    
}