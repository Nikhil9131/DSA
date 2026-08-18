#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans(n + 1, 0);

        for (int i = 1; i <= n; i++) {

            ans[i] = ans[i & (i - 1)] + 1;
        }

        return ans;
    }
};
int main() {
    Solution obj;
    int n;
    cin >> n;
    vector<int> ans = obj.countBits(n);

    for (int i = 0; i <= n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}