class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
                if (strs.empty()) return "";

        // Start with the first string as the prefix
        string prefix = strs[0];

        // Compare the prefix with the rest of the strings
        for (int i = 1; i < strs.size(); ++i) {
            // Reduce prefix until it matches the start of the current string
            while (strs[i].find(prefix) != 0) {
                // Chop off the last character of prefix
                prefix = prefix.substr(0, prefix.length() - 1);
                // If prefix becomes empty, return ""
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};
