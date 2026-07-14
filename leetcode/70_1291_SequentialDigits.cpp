#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int> ans;
        string s = "123456789";

        string l = to_string(low);
        string h = to_string(high);

        for (int len = l.size(); len <= h.size(); len++) {

            for (int start = 0; start <= 9 - len; start++) {

                string numStr = s.substr(start, len);
                int num = stoi(numStr);

                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }
        }

        return ans;
    }
};

int main() {

    int low, high;

    cout << "Enter low: ";
    cin >> low;

    cout << "Enter high: ";
    cin >> high;

    Solution obj;
    vector<int> result = obj.sequentialDigits(low, high);

    cout << "Sequential Digits Numbers: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}