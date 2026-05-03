#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans=nums;
    for(int i=0;i<n;i++){
        ans.push_back(nums[i]);
    }
    return ans;
}
int main() {
    vector<int> nums={1,2,1};
    vector<int> ans=getConcatenation(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}