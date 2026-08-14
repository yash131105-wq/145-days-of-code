#include <iostream>
using namespace std;
#include<cmath>


int main()
{
    int n = 1234;
    int u = n;
    int j = 0;
    int ld;
    int r;
    int sum = 0;
    while(n > 0){
        n /= 10;
        j++;
    }
    for(int i=1; i<=j ; i++){
        ld = u%10;
        r = ld*(pow(10,j-i));
        sum += r;
        u /= 10;
        
    }
    cout<<sum;

    return 0;
}


    
