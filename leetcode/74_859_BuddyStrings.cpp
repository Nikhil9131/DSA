#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {

        if (s.size() != goal.size())
            return false;

        // Case 1: Strings are already equal
        if (s == goal) {

            vector<int> freq(26, 0);

            for (char c : s) {
                freq[c - 'a']++;

                // Duplicate character exists
                if (freq[c - 'a'] > 1)
                    return true;
            }

            return false;
        }

        // Find differing positions
        vector<int> diff;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        return diff.size() == 2 &&
               s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};

int main() {

    string s, goal;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter goal string: ";
    cin >> goal;

    Solution obj;

    if (obj.buddyStrings(s, goal))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}