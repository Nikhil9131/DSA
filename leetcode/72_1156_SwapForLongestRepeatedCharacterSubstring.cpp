#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxRepOpt1(string text) {

        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char c : text)
            freq[c - 'a']++;

        int ans = 0;

        // Try every character from 'a' to 'z'
        for (char ch = 'a'; ch <= 'z'; ch++) {

            int left = 0;
            int diff = 0;

            for (int right = 0; right < text.size(); right++) {

                if (text[right] != ch)
                    diff++;

                while (diff > 1) {
                    if (text[left] != ch)
                        diff--;
                    left++;
                }

                ans = max(ans, min(right - left + 1, freq[ch - 'a']));
            }
        }

        return ans;
    }
};

int main() {

    string text;

    cout << "Enter the string: ";
    cin >> text;

    Solution obj;

    int ans = obj.maxRepOpt1(text);

    cout << "Longest Repeated Character Substring = " << ans << endl;

    return 0;
}