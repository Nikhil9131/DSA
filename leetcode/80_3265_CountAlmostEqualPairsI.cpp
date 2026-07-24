#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool almostEqual(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);

        while (s1.size() < s2.size()) s1 = "0" + s1;
        while (s2.size() < s1.size()) s2 = "0" + s2;

        if (s1 == s2) return true;

        int n = s1.size();

        // Swap in first number
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(s1[i], s1[j]);
                if (s1 == s2) return true;
                swap(s1[i], s1[j]);
            }
        }

        // Swap in second number
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(s2[i], s2[j]);
                if (s1 == s2) return true;
                swap(s2[i], s2[j]);
            }
        }

        return false;
    }

    int countPairs(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (almostEqual(nums[i], nums[j]))
                    ans++;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << obj.countPairs(nums);

    return 0;
}