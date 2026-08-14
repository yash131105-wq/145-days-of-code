#include<iostream>
#include<cmath>
using namespace std;
void isArmstrong(int x){
    if(x==0) {
        cout << "The num is Armstrong";
        return;
    }
    int j = 0;
    int u = x;
    int y = x;
    while(x>0){
        x /= 10;
        j++;
    }
    int sum = 0;
    for(int i=1; i<=j; i++){
        int ld = u%10;
        int r = (int)pow(ld,j);
        sum += r;
        u /= 10;
    }
    if(sum == y) cout<<"The num is Armstrong";
    else cout<<"No the num is not Armstrong";
    
}
int main(){
    int a; 
    cin>>a;
    isArmstrong(a);
}