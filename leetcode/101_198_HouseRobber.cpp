#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> dp(n);

        // Only one house
        dp[0] = nums[0];

        // For two houses, choose the one with more money
        dp[1] = max(nums[0], nums[1]);

        // For remaining houses
        for (int i = 2; i < n; i++) {

            // Option 1: Don't rob current house
            int dontRob = dp[i - 1];

            // Option 2: Rob current house
            int rob = dp[i - 2] + nums[i];

            dp[i] = max(dontRob, rob);
        }

        return dp[n - 1];
    }
};

int main() {

    Solution obj;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << obj.rob(nums);

    return 0;
}