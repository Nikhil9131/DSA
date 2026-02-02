#include<iostream>
using namespace std;
int main () {
    int a,b;
    cin>>a>>b;

    while(b!=0){
int t= a%b;
a=b;
b=t;
}   
cout<<a<<endl; 
return 0;
}
