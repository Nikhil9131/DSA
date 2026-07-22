#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n);

        int mx = 0;
        long long ans = 0;

        // Calculate GCD with maximum element seen so far
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            a[i] = gcd(mx, nums[i]);
        }

        // Sort the GCD values
        sort(a.begin(), a.end());

        // Calculate the required sum
        int i = 0, j = n - 1;
        while (i < j) {
            ans += gcd(a[i], a[j]);
            i++;
            j--;
        }

        return ans;
    }
};

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << "GCD Sum = " << obj.gcdSum(nums) << endl;

    return 0;
}