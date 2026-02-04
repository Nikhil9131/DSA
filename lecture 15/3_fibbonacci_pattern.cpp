#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 or n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    cin>>n;
    int g=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fibonacci(g)<<" ";
            g++;
        }
    cout<<endl;
    }
    return 0;
}