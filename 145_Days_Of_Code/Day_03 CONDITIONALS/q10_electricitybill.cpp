#include<iostream>
using namespace std;
int main(){
     int a;
    cout<<"Enter the Units: ";
    cin>>a;
    if(a<=100) cout<<"The rate is: "<<5*a<<"rupees";
    else if (a<=200) cout<<"The rate is: "<<7*a<<"rupees";
    else cout<<"The rate is: "<<10*a<<"rupees"<<endl;
}    
        