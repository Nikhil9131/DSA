#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);

        stringstream ss(s);
        string word;

        while (ss >> word) {

            // Last character is the position
            int pos = word.back() - '0';

            // Remove the position number
            word.pop_back();

            // Store word at its correct position
            words[pos] = word;
        }

        string ans = "";

        // Construct original sentence
        for (int i = 1; i <= 9; i++) {
            if (words[i].empty())
                continue;

            if (!ans.empty())
                ans += " ";

            ans += words[i];
        }

        return ans;
    }
};

int main() {
    Solution obj;

    string s;
    getline(cin, s);

    cout << obj.sortSentence(s);

    return 0;
}