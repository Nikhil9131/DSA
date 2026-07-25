#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq(26, 0);

        // Count frequency of characters in s
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Remove matching characters from t
        for (char ch : t) {
            if (freq[ch - 'a'] > 0) {
                freq[ch - 'a']--;
            }
        }

        // Remaining characters need replacement
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += freq[i];
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