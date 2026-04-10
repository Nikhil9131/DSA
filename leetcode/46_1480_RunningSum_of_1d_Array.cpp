#include <iostream>
#include <vector>
using namespace std;


vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = runningSum(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}