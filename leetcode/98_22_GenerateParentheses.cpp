#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:

    void solve(int n, int open, int close,
               string current, vector<string>& ans) {

        // If we have used 2*n brackets
        if (current.size() == 2 * n) {
            ans.push_back(current);
            return;
        }

        // We can add '(' if we still have opening brackets left
        if (open < n) {
            solve(n, open + 1, close,
                  current + '(', ans);
        }

        // We can add ')' only if an opening bracket is available
        if (close < open) {
            solve(n, open, close + 1,
                  current + ')', ans);
        }
    }

    vector<string> generateParenthesis(int n) {

        vector<string> ans;

        solve(n, 0, 0, "", ans);

        return ans;
    }
};

int main() {

    Solution obj;

    int n;
    cin >> n;

    vector<string> ans = obj.generateParenthesis(n);

    for (string s : ans) {
        cout << s << endl;
    }

    return 0;
}