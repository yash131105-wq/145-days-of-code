#include<iostream>
using namespace std;
int main(){
    int a = 1;
    while(a <= 26){
        cout<<(char)(a + 64 )<<" "<<a; // pehle main (char)a kar rha tha and kuch print nhi ho rha tha bcz ASCII values for 
        cout<<endl; // 1 to 26 non printable hai as they are control buttons
        a++;
    }
}
