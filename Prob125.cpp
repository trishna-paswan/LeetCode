class Solution { 
public: 
    bool isPalindrome(string s) {
        string cl = "";

        for(char c : s){
            if (isalnum(c)){
                cl += tolower(c);
            }
        }
        int n = cl.length();
        for(int i=0; i < n/2; i++){
            if (cl[i] != cl[n-1-i]){
                return false;
            }
        }
        return true;
    }
};
