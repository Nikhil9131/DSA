#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {

        vector<string> a, b;
        string word;

        // Convert sentence1 into words
        stringstream ss1(sentence1);

        while (ss1 >> word) {
            a.push_back(word);
        }

        // Convert sentence2 into words
        stringstream ss2(sentence2);

        while (ss2 >> word) {
            b.push_back(word);
        }

        // Make a the longer sentence
        if (a.size() < b.size()) {
            swap(a, b);
        }

        int n = a.size();
        int m = b.size();

        // Find common prefix
        int left = 0;

        while (left < m && a[left] == b[left]) {
            left++;
        }

        // Find common suffix
        int right = 0;

        while (right < m - left &&
               a[n - 1 - right] == b[m - 1 - right]) {
            right++;
        }

        return left + right >= m;
    }
};

int main() {
    Solution obj;

    string sentence1, sentence2;

    getline(cin, sentence1);
    getline(cin, sentence2);

    if (obj.areSentencesSimilar(sentence1, sentence2))
        cout << "true";
    else
        cout << "false";

    return 0;
}