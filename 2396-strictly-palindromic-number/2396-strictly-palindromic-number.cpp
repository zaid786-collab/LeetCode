class Solution {
public:
    bool isStrictlyPalindromic(int n) {

        for(int i=2;i<=n-2;i++) {
            int a = n;
            string num = "";

            while(a > 0) {
                int digit = a%i;
                a = a/i;
                num += char('0' + digit);
            }

            string rev = num;
            reverse(num.begin(),num.end());

            if(num != rev) return false;
        }

        return true;
    }
};