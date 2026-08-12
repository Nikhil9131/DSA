#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        // Sort by ending time
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        int removed = 0;

        // End of the last interval we kept
        int prevEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {

            // No overlap
            if (intervals[i][0] >= prevEnd) {
                prevEnd = intervals[i][1];
            }
            else {
                // Overlap, so remove current interval
                removed++;
            }
        }

        return removed;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    cout << obj.eraseOverlapIntervals(intervals);

    return 0;
}