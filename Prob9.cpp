class Solution {
public:

    bool isPalindrome(int x) {
        if (x < 0 or x < 100) return false;
        string s = to_string(x);

        string rev = string(s.begin(), s.end());
        return s == rev;
    }
};
