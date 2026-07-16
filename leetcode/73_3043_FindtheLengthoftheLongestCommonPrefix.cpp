#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_set<int> prefixes;

        // Store all prefixes of arr1
        for (int num : arr1) {
            while (num > 0) {
                prefixes.insert(num);
                num /= 10;
            }
        }

        int ans = 0;

        // Check prefixes in arr2
        for (int num : arr2) {
            while (num > 0) {

                if (prefixes.count(num)) {
                    ans = max(ans, (int)to_string(num).size());
                    break;
                }

                num /= 10;
            }
        }

        return ans;
    }
};

int main() {

    int n, m;

    cout << "Enter size of arr1: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter elements of arr1: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter size of arr2: ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter elements of arr2: ";
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    Solution obj;

    int ans = obj.longestCommonPrefix(arr1, arr2);

    cout << "Length of Longest Common Prefix = " << ans << endl;

    return 0;
}