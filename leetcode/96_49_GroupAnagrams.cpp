#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mp;

        for (string s : strs) {

            string temp = s;

            // Sort the string
            sort(temp.begin(), temp.end());

            // Store original string
            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto x : mp) {
            ans.push_back(x.second);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<string> strs(n);

    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> ans = obj.groupAnagrams(strs);

    for (auto group : ans) {
        cout << "[ ";

        for (string s : group) {
            cout << s << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}