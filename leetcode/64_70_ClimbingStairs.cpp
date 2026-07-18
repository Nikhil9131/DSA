#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {

        if (n <= 2)
            return n;

        int a = 1, b = 2;

        for (int i = 3; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};

int main() {

    int n;

    cout << "Enter the number of stairs: ";
    cin >> n;

    Solution obj;

    int ways = obj.climbStairs(n);

    cout << "Number of distinct ways to climb " << n
         << " stairs = " << ways << endl;

    return 0;
}