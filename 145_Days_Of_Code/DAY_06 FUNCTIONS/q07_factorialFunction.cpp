#include<iostream>
using namespace std;
int fact(int y){
    int a = 1;
    for(int i=1; i<=y; i++)
        a *= i;
    return a;
}
int main(){
    int a;
    cin>>a;
    cout<<"The factorial of the input is: "<<fact(a);
} // we can also first store the fact(a) like int b = fact(a).