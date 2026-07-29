#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    bool sumGame(string num) {
        // fh = first half sum
        // sh = second half sum
        // qf = question marks in first half
        // qs = question marks in second half
        int fh = 0, sh = 0, qf = 0, qs = 0;

        int n = num.size();

        // Process first half
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                qf++;
            else
                fh += num[i] - '0';
        }

        // Process second half
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                qs++;
            else
                sh += num[i] - '0';
        }

        // If sums are already equal
        if (fh == sh) {
            return qf != qs;
        }

        bool possible =
            (fh > sh && qf < qs) ||
            (fh < sh && qf > qs);

        if (!possible)
            return true;

        int diff = abs(fh - sh);
        int qc = abs(qf - qs);

        if (qc % 2 == 1)
            return true;

        return (qc / 2) * 9 != diff;
    }
};

int main() {
    Solution obj;

    string num;
    cin >> num;

    if (obj.sumGame(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}