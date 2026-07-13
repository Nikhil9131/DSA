#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        int smaller = 0, equal = 0;

        // Count elements smaller than target and equal to target
        for (int x : nums) {
            if (x < target)
                smaller++;
            else if (x == target)
                equal++;
        }

        vector<int> ans;

        // Target indices after sorting
        for (int i = 0; i < equal; i++) {
            ans.push_back(smaller + i);
        }

        return ans;
    }
};

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    Solution obj;
    vector<int> result = obj.targetIndices(nums, target);

    cout << "Target indices after sorting: ";

    if (result.empty()) {
        cout << "No target found.";
    } else {
        for (int index : result) {
            cout << index << " ";
        }
    }

    cout << endl;

    return 0;
}