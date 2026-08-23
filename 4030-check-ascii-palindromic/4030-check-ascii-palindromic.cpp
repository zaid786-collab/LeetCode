class Solution {
public:
    bool isPalindromic(string s) {
        string binary;

        for(char ch : s) {
            int num = ch;

            for(int i=7;i>=0;i--) {
                binary += ((num>>i) & 1) + '0';
            }
        }

        string rev = binary;
        reverse(rev.begin(),rev.end());

        return rev == binary;
    }
};