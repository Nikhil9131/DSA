#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string result;

        while (a > 0 || b > 0) {

            // Check if last two characters are the same
            if (result.size() >= 2 && result.back() == result[result.size() - 2]) {

                if (result.back() == 'a') {
                    if (b > 0) {
                        result += 'b';
                        b--;
                    } else {
                        break;
                    }
                } else {
                    if (a > 0) {
                        result += 'a';
                        a--;
                    } else {
                        break;
                    }
                }

            } else {

                if ((a >= b && a > 0) || b == 0) {
                    result += 'a';
                    a--;
                } else {
                    result += 'b';
                    b--;
                }

            }
        }

        return result;
    }
};

int main() {
    int a, b;

    cout << "Enter the number of 'a': ";
    cin >> a;

    cout << "Enter the number of 'b': ";
    cin >> b;

    Solution obj;
    string ans = obj.strWithout3a3b(a, b);

    cout << "Resulting String: " << ans << endl;

    return 0;
}