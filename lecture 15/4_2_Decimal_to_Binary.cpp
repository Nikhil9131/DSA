#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int bn=0;
    int place =1;
    while (n>0){
        int k = n%2;
        bn= bn + k*place;
        place= place*10;
        n=n/2;
    }
        cout<<bn<<endl;

  return 0;
}
