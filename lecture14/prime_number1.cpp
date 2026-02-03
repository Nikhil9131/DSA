#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool ans=true;
    //hum phele se assume kar rahe hai ki number prime hoga 
    for (int i=2;i<=n-1;i++){// n%2 can also work ... but ye thoda optimized hai
        if( n% i==0){
            ans =false ;

        }
    }
    if (ans){   // ans matlab true hota hai . if (ans==true) actual meaning yehi hai
        cout<<"prime hai"<<endl;
    } else{
        cout<<"not prime hai"<<endl;
    }
    return 0;
}