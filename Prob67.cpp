class Solution {
public:
    string addBinary(string a, string b) {
        string r="";
        int c=0;

        int i = a.length() - 1;
        int j = b.length() - 1;

        while(i >= 0 || j >= 0 || c){
            int bitA = (i >= 0) ? a[i--] - '0' : 0;
            int bitB = (j >= 0) ? b[j--] - '0' : 0;

            int t = bitA + bitB + c;
            r += (t % 2) + '0';
            c = t/2;
        }
        reverse(r.begin(), r.end());
        return r;
    }
};
