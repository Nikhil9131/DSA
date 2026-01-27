#include<iostream>
using namespace std ;
int main () {
    int n ;
    cin>>n ;
    for (int i=1; i<=n; i++) {
        for (j=1;j<=i;j++){
            if (j%2!=0){
                cout<< i <<" ";
            }else{ 
                cout<<2*n-i<< " ";
            }
            }
        }


    }
    return 0;
}