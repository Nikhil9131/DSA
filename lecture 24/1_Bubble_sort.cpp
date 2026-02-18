#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
}
//Bubble sort
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<< "sorted array through bubble sort "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<< "  " ;
}
return 0;
}