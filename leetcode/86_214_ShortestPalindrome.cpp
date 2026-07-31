#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        string temp = s + "#" + rev;

        vector<int> lps(temp.size(), 0);

        // Build LPS array
        for (int i = 1; i < temp.size(); i++) {
            int len = lps[i - 1];

            while (len > 0 && temp[i] != temp[len]) {
                len = lps[len - 1];
            }

            if (temp[i] == temp[len]) {
                len++;
            }

            lps[i] = len;
        }

        int longestPrefix = lps.back();

        string add = s.substr(longestPrefix);
        reverse(add.begin(), add.end());

        return add + s;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    cout << obj.shortestPalindrome(s);

    return 0;
}