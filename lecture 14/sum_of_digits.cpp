#include<iostream>
#include<climits>
using namespace std ;
int main() {
    int a =INT_MAX;
    // positive infinity
    int b=INT_MIN;
    // negative infinity
    int n;
    cin>> n;
    int rev =0;
    // while loop
    while (n!=0){
        int  k= n%10;
        rev = rev + k;   
        n = n/10;
    }
    //for loop 
    // for(int i=n; i!=0; i=i/10){
    //int k = i%10;
    // rev = rev + k;   
    // }
    cout<<rev<<endl;
    cout<<abs(rev)<<endl;
    return 0;
}