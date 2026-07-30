#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }

        int n = s.size();
        string ans(n, ' ');

        int left = 0, right = n - 1;

        for (int i = 0; i < 26; i++) {
            while (freq[i] >= 2) {
                ans[left++] = char(i + 'a');
                ans[right--] = char(i + 'a');
                freq[i] -= 2;
            }

            // Place the odd frequency character in the middle
            if (freq[i] == 1) {
                ans[n / 2] = char(i + 'a');
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    cout << obj.smallestPalindrome(s);

    return 0;
}