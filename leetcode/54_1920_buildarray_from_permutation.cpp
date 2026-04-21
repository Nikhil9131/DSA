#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> buildArray(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i]=nums[nums[i]];
    }
    return ans;
}
int main() {
    vector<int> nums={0,2,1,5,4,3};
    vector<int> ans=buildArray(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}