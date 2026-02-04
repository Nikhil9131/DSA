#include<iostream>
using namespace std ;
int main() {
    int n;
    cin>> n;
    int rev =0;
    // for while loop
    while (n!=0){
        int  k= n%10;
        rev = rev*10 + k;   
        n = n/10;
}

// // for loop
// for(int i=n; i>0; i=i/10){
//     int k = i%10;
//     rev = rev*10 + k;
// }
cout<<rev<<endl;
return 0;
}