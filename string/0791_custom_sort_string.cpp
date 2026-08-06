class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        string ans = "";

        // Step 1: count frequency of characters in s
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: add characters in the order string
        for (char c : order) {
            while (freq[c] > 0) {
                ans += c;
                freq[c]--;
            }
        }

        // Step 3: add remaining characters
        for (auto &it : freq) {
            while (it.second > 0) {
                ans += it.first;
                it.second--;
            }
        }

        return ans;
    }
};