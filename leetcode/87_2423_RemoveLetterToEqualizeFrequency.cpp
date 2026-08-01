#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char ch : word)
            freq[ch - 'a']++;

        // Try removing one occurrence of every character
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0)
                continue;

            freq[i]--;

            int target = 0;
            bool ok = true;

            for (int j = 0; j < 26; j++) {
                if (freq[j] == 0)
                    continue;

                if (target == 0)
                    target = freq[j];
                else if (freq[j] != target) {
                    ok = false;
                    break;
                }
            }

            // Restore frequency
            freq[i]++;

            if (ok)
                return true;
        }

        return false;
    }
};

int main() {
    Solution obj;

    string word;
    cin >> word;

    if (obj.equalFrequency(word))
        cout << "true";
    else
        cout << "false";

    return 0;
}