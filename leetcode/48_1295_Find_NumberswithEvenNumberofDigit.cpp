#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool btao(int n){
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    if(cnt%2==0){
        return true;
    }
    return false;
}
int findNumbers(vector<int>& nums) {
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(btao(nums[i])){
            ans++;
        }
    }
    return ans;
}
int main() {
    vector<int> nums={12,345,2,6,9896};
    cout<<findNumbers(nums)<<endl;
    return 0;
}