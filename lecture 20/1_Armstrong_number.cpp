#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int og =n;
    int temp=n;
    int sum=0;
    // digit calcilate karna 
    int l=0;
    while(temp!=0){
        temp=temp/10;
        l++;
    }
    //power nikalna and add karna 
    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    //compare karna 
    cout<<l<<" "<<sum<<endl;
    if(og==sum){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }
    return 0;

}