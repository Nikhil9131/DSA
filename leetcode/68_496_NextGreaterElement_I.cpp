#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        stack<int> st;

        // Find next greater element for every number in nums2
        for (int num : nums2) {

            while (!st.empty() && num > st.top()) {
                mp[st.top()] = num;
                st.pop();
            }

            st.push(num);
        }

        vector<int> ans;

        // Build answer for nums1
        for (int num : nums1) {
            if (mp.count(num))
                ans.push_back(mp[num]);
            else
                ans.push_back(-1);
        }

        return ans;
    }
};

int main() {

    int n1, n2;

    cout << "Enter size of nums1: ";
    cin >> n1;

    vector<int> nums1(n1);

    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of nums2: ";
    cin >> n2;

    vector<int> nums2(n2);

    cout << "Enter elements of nums2: ";
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    Solution obj;
    vector<int> ans = obj.nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";

    for (int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}