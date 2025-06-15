class Solution {
public:
    int lengthOfLastWord(string s) {
                int length = 0;
        int i = s.length() - 1;  // Last Character
        while (i >= 0 && s[i] == ' '){
            i--;
        }

        while (i >= 0 && s[i] != ' '){
            length++;     // Increase the non space character 
            i--;
        }
        return length;
    }
};
