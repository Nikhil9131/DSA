#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;

    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int start = nums[i];

        // Find consecutive numbers
        while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
            i++;
        }

        int end = nums[i];

        // If only one number
        if (start == end) {
            ans.push_back(to_string(start));
        }
        // If there is a range
        else {
            ans.push_back(to_string(start) + "->" + to_string(end));
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {0, 1, 2, 4, 5, 7};

    vector<string> result = summaryRanges(nums);

    cout << "[";

    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";

        if (i != result.size() - 1) {
            cout << ",";
        }
    }

    cout << "]" << endl;

    return 0;
}