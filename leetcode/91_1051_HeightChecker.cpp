#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;

        // Sort to get expected order
        sort(expected.begin(), expected.end());

        int count = 0;

        // Compare current and expected order
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << obj.heightChecker(heights);

    return 0;
}