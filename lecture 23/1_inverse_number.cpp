#include<iostream>
#include<vector>
using namespace std;
int main() {
 int num;
 cin>>num;
 int temp = num;
 int rev= 0;

    while(temp != 0){ 
        rev++;
         temp /= 10;
 }

 vector <int> ans(rev);
 
        int i = 0;
            while(num != 0){

        int l = num % 10;
            ans[l-1] =i+1;
                i++;
                num /= 10;
            }

        for(int i =rev-1; i>=0 ; i--){
            cout<<ans[i];
 }
 return 0;
}