#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int xy = 0, yx = 0;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == 'x' && s2[i] == 'y')
                xy++;
            else if (s1[i] == 'y' && s2[i] == 'x')
                yx++;
        }

        // If total mismatches are odd, impossible
        if ((xy + yx) % 2)
            return -1;

        return (xy / 2) + (yx / 2) + (xy % 2) * 2;
    }
};

int main() {
    Solution obj;

    string s1, s2;
    cin >> s1 >> s2;

    cout << obj.minimumSwap(s1, s2);

    return 0;
}