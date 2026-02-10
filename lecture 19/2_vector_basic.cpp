#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> a; // declaration of vector
    a.push_back(1); 
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
        // size of vector
cout<<a.size()<<endl; 
//capacity of vector
cout<<a.capacity()<<endl; 
    //delete
    a.pop_back();
     // size of vector
cout<<a.size()<<endl; 
    //capacity of vector
cout<<a.capacity()<<endl; 

for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";   
} 
cout<<endl;
cout<<a.front()<<endl; // first element of vector
cout<<a.back()<<endl; // last element of vector
a.insert(a.begin()+2,6);

for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";   
} 

    // reverse
    reverse(a.begin(), a.end());

    //sort
    sort(a.begin(), a.end());

cout<<endl;
    return 0;
}