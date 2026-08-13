#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,e,f;
    cout<<"Enter Physics Marks: ";
    cin>>a;
    cout<<"Enter Maths Marks: ";
    cin>>b;
    cout<<"Enter Chemistry Marks: ";
    cin>>c;
    cout<<"Enter Biology Marks: ";
    cin>>d;
    cout<<"Enter SST Marks: ";
    cin>>e;
    cout<<"Total marks obtained out of 500: "<<a+b+c+d+e<<endl;
    cout<<"Average marks: "<< (a+b+c+d+e)/500<<endl;
    cout<<"Percentage achieved: "<< ((a+b+c+d+e)/500)*100;


}