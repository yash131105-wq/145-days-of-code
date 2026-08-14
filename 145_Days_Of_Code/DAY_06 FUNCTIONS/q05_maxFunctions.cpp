#include<iostream>
using namespace std;
int _max(int x, int y){
    return max( x, y); // this inbuilt function max works only for 2 integers
    // matlab 3 ints ke liye hume apna dimag lagana padega
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"The maximum of these nums are: "<<_max(a,b);
    
}