#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        // Sort greed factors
        sort(g.begin(), g.end());

        // Sort cookie sizes
        sort(s.begin(), s.end());

        size_t i = 0;  // child index
        size_t j = 0;  // cookie index

        while (i < g.size() && j < s.size()) {

            // If cookie is big enough
            if (s[j] >= g[i]) {
                i++;
            }

            // Move to next cookie
            j++;
        }
        return i;
    }
};

int main() {
    Solution obj;

    int n, m;

    cin >> n;

    vector<int> g(n);

    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    cin >> m;

    vector<int> s(m);

    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }

    cout << obj.findContentChildren(g, s);

    return 0;
}