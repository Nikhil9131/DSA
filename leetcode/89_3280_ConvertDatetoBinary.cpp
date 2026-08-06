#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toBinary(int num) {
        if (num == 0) return "0";

        string res = "";
        while (num > 0) {
            res += (num % 2) + '0';
            num /= 2;
        }

        reverse(res.begin(), res.end());
        return res;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};

int main() {
    Solution obj;
    string date;
    cin >> date;
    cout << obj.convertDateToBinary(date);
    return 0;
}