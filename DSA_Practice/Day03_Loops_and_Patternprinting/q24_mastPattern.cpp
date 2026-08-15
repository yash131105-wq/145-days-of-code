#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    for(int i=1; i<=n; i++){
    int a = i-1;
         for(int j=1; j<=n-i; j++){
            // printing spaces
            cout<<"  ";
        } // printing first numbers
        for(int j=1; j<=i; j++)
       { cout<<j<<" " ;
    }       // printing second pattern of nums
    for(int k=1; k<=i-1; k++){
        cout<<a<<" ";
        a--;
    }
    cout<<endl;

    
    
}
}

