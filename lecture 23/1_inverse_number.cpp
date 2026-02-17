#include<iostream>
#include<vector>
using namespace std;
int main() {
 int num;
 cin>>num;
 int temp = num;
 int count= 0;

    while(temp != 0){ 
        count++;
         temp /= 10;
 }

 vector <int> ans(count);
 
        int i = 0;
            while(num != 0){

        int l = num % 10;
            ans[l-1] =i+1;
                i++;
                num /= 10;
            }

        for(int i =count-1; i>=0 ; i--){
            cout<<ans[i];
 }
 return 0;
}