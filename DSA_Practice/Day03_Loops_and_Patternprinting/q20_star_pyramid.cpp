#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            // printing spaces
            cout<<" ";
        } // printing stars
        for(int k=1; k<=2*i-1; k++) cout<<"*";
        cout<<endl;}
    }
        // another method using nst and nsp concepts

 /*#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int nsp = n-1;
	int nst = 1;
	for(int i=1; i<=n; i++) {       
		for(int j=1; j<=nsp; j++) {
			// printing spaces
			cout<<" ";
		}
		nsp--;
		for(int k=1; k<=nst; k++) { // for the stars
			cout<<"*";
		}
		nst +=2;
		cout<<endl;
	}
}*/       