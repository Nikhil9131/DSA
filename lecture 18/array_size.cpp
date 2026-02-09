#include<iostream>

using namespace std ;

int main() {
    //create
    //first way
    int arr[5];
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;   

    int arr_b[]={1,2,3,4,5};
    //third way
int n;
cin>> n;
int arr_c[n];
int s=sizeof(arr)/sizeof(int);
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<s;i++){
    arr[i]+=i;
}
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}
return 0;
}