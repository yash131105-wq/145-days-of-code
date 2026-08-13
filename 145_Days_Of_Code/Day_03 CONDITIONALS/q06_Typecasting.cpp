#include<iostream>
using namespace std;
int main(){
     char ch;
     ch = 'a';
     cout<<( ch + 12); //this will print 109
     int x = 109;
     cout<<endl;
     cout<<(char)(x); //this will print the ASCII value associated with the number 109
     cout<<endl;
     cout<<(int)(ch)<<endl; //this will print the ASCII value of the letter a i.e. 97
     char _x;
     _x = 'A';
     cout<<(int)(_x)<<endl; // it will print 65
     cout<<_x + 5<<endl;
     char _y;
     cin>>_y;
     cout<<(int)_y; // this will print ascii values of every character given by the user.


     

}



