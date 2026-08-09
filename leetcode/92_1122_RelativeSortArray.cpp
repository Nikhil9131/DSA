#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001, 0);

        // Count frequency
        for (int x : arr1) {
            freq[x]++;
        }

        vector<int> ans;

        // Follow the order of arr2
        for (int x : arr2) {
            while (freq[x] > 0) {
                ans.push_back(x);
                freq[x]--;
            }
        }

        // Remaining elements in ascending order
        for (int x = 0; x <= 1000; x++) {
            while (freq[x] > 0) {
                ans.push_back(x);
                freq[x]--;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n, m;

    cin >> n;
    vector<int> arr1(n);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;
    vector<int> arr2(m);

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = obj.relativeSortArray(arr1, arr2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}