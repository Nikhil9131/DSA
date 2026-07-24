#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> diff;

        // Store indices where characters are different
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }

        // Strings are already equal
        if (diff.size() == 0)
            return true;

        // More or less than 2 mismatches cannot be fixed with one swap
        if (diff.size() != 2)
            return false;

        // Check if swapping the two mismatched characters makes strings equal
        return (s1[diff[0]] == s2[diff[1]] &&
                s1[diff[1]] == s2[diff[0]]);
    }
};

int main() {
    Solution obj;

    string s1, s2;
    cin >> s1 >> s2;

    if (obj.areAlmostEqual(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}