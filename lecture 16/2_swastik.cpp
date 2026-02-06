#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        // first row
        if(i==1){
            cout<<"*";
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            for(int j=1;j<=m;j++){
                cout<<"*";
            }
        }
        // last low
        else if(i==m){
            for(int i=1;i<=n;i++)
            {
                cout<<"*";
            }
        }
        // remaining rows
        else{
            cout<<"*";
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<=m-1;j++){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        // first row
        if(i==1){
            for(int j=1;j<=m;j++){
                cout<<"*";
            }
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        // remaining rows
        else{
            for(int j=1;j<=m-1;j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<=m-2;j++){
                cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}