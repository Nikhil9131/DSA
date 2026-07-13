#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int nextGreaterElement(int n) {

        vector<int> digits;
        int t = n;

        // Extract digits
        while (t > 0) {
            digits.push_back(t % 10);
            t /= 10;
        }

        reverse(digits.begin(), digits.end());

        // Find next permutation
        if (!next_permutation(digits.begin(), digits.end()))
            return -1;

        long long ans = 0;

        // Form the number and check overflow
        for (int d : digits) {
            ans = ans * 10 + d;
            if (ans > INT_MAX)
                return -1;
        }

        return (int)ans;
    }
};

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    Solution obj;

    int result = obj.nextGreaterElement(n);

    if (result == -1)
        cout << "No next greater element exists." << endl;
    else
        cout << "Next Greater Element: " << result << endl;

    return 0;
}