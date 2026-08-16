#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    // Normal House Robber
    // Rob houses from start to end
    int solve(vector<int>& nums, int start, int end) {

        int prev2 = 0;
        int prev1 = 0;

        for (int i = start; i <= end; i++) {

            // Don't rob current house
            int dontRob = prev1;

            // Rob current house
            int rob = prev2 + nums[i];

            int current = max(dontRob, rob);

            // Move forward
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        // Only one house
        if (n == 1)
            return nums[0];

        // Case 1:
        // Don't rob first house
        int case1 = solve(nums, 1, n - 1);

        // Case 2:
        // Don't rob last house
        int case2 = solve(nums, 0, n - 2);

        return max(case1, case2);
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