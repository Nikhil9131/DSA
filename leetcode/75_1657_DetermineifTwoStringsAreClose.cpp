#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if (word1.size() != word2.size())
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        // Count frequencies
        for (char c : word1)
            freq1[c - 'a']++;

        for (char c : word2)
            freq2[c - 'a']++;

        // Check if both strings have the same set of characters
        for (int i = 0; i < 26; i++) {
            if ((freq1[i] == 0) != (freq2[i] == 0))
                return false;
        }

        // Compare sorted frequencies
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};

int main() {

    string word1, word2;

    cout << "Enter first string: ";
    cin >> word1;

    cout << "Enter second string: ";
    cin >> word2;

    Solution obj;

    if (obj.closeStrings(word1, word2))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}