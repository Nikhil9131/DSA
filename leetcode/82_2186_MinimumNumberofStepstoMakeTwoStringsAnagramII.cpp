#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freqS(26, 0), freqT(26, 0);

        // Count frequency of characters in s
        for (char ch : s) {
            freqS[ch - 'a']++;
        }

        // Count frequency of characters in t
        for (char ch : t) {
            freqT[ch - 'a']++;
        }

        // Calculate total differences
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += abs(freqS[i] - freqT[i]);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string s, t;
    cin >> s >> t;

    cout << obj.minSteps(s, t);

    return 0;
}