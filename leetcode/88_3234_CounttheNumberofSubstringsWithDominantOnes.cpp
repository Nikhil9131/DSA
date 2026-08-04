#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long numberOfSubstrings(string s) {
        int n = s.size();

        vector<int> zeros;

        // Store positions of all zeros
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                zeros.push_back(i);
        }

        long long ans = 0;

        // Case 1: Substrings containing only '1'
        long long len = 0;
        for (char ch : s) {
            if (ch == '1') {
                len++;
                ans += len;
            } else {
                len = 0;
            }
        }
        int m = zeros.size();
        // Enumerate number of zeros in substring
        for (int k = 1; k <= m; k++) {

            if (1LL * k * k > n)
                break;

            for (int i = 0; i + k - 1 < m; i++) {

                int first = zeros[i];
                int last = zeros[i + k - 1];

                int leftBound = (i == 0) ? -1 : zeros[i - 1];
                int rightBound = (i + k == m) ? n : zeros[i + k];

                int leftChoices = first - leftBound;
                int rightChoices = rightBound - last;

                int zeroLength = last - first + 1; 
                // Extra ones needed
                int need = max(0, k * k - (zeroLength - k));

                for (int leftTake = 1; leftTake <= leftChoices; leftTake++) {

                    int extraLeft = leftTake - 1;
                    int requiredRight = max(0, need - extraLeft);

                    if (requiredRight < rightChoices)
                        ans += (rightChoices - requiredRight);
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    cout << obj.numberOfSubstrings(s);

    return 0;
}