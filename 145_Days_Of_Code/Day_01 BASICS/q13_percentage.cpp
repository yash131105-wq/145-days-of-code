#include<iostream>
using namespace std;
int main(){
   float a,b,c,d,e;
    cout<<"Enter the marks obtained in all 5 subjects: "<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"Total: "<<a+b+c+d+e<<endl;
    cout<<"Average: "<<(a+b+c+d+e)/5<<endl;
    cout<<"Percentage: "<<((a+b+c+d+e)/500)*100<<"%";


}