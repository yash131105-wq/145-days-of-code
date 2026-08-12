#include<iostream>
using namespace std;
int main(){
    int a = 1;
    while(a <= 26){
        cout<<(char)(a + 64 )<<" "<<a;
        cout<<endl;
        a++;
    }
}
