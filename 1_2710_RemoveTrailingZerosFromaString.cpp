#include <bits/stdc++.h>
using namespace std;

string removeTrailingZeros(string num) {
    int i = num.size() - 1;

    // Remove zeros from the end
    while (i >= 0 && num[i] == '0') {
        i--;
    }

    return num.substr(0, i + 1);
}

int main() {
    string num;

    cout << "Enter number: ";
    cin >> num;

    string result = removeTrailingZeros(num);

    cout << "Result: " << result << endl;

    return 0;
}