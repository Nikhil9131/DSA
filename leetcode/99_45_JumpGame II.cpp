#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {

        int jumps = 0;
        int end = 0;
        int far = 0;

        for (int i = 0; i < nums.size() - 1; i++) {

            // Farthest index we can reach
            far = max(far, i + nums[i]);

            // Current jump range is finished
            if (i == end) {

                jumps++;

                // Start next jump
                end = far;
            }
        }

        return jumps;
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

    cout << obj.jump(nums);

    return 0;
}