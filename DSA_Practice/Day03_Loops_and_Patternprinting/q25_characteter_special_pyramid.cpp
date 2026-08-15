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
       { cout<<(char)(j + 64)<<" " ;
    }       // printing second pattern of nums
    for(int k=1; k<=i-1; k++){
        cout<<(char)(a + 64)<<" ";
        a--;
    }
    cout<<endl;

    
    
}
}

