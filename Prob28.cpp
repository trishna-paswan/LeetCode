class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        return (pos != string::npos ? pos : -1);
    }
};
