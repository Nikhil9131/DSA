#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool ans=true;
    //hum phele se assume kar rahe hai ki number prime hoga 
    for (int i=2;i<=sqrt(n);i++){
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