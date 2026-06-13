class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;
        for (string &word : words) {
            int sum = 0;
            for (char ch : word) {
                sum += weights[ch - 'a'];
            }
            int mod = sum % 26;
            // 0 -> z, 1 -> y, ..., 25 -> a
            result += char('z' - mod);
        }
        return result;
    }
};