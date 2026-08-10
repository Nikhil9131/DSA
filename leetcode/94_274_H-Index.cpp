#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());

        int n = citations.size();
        int h = 0;

        for (int i = 0; i < n; i++) {
            int papers = n - i;

            if (citations[i] >= papers) {
                h = papers;
            }
        }

        return h;
    }
};
int main() {
    Solution obj;

    int n;
    cin >> n;

    vector<int> citations(n);

    for (int i = 0; i < n; i++) {
        cin >> citations[i];
    }

    cout << obj.hIndex(citations);

    return 0;
}