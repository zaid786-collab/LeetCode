class Solution {
public:
    int minSwaps(string s) {
        int balance = 0;
        int maxbalance = 0;
        int n = s.length();

        for(int i=0;i<n;i++) {
            if(s[i] == '[') {
                balance++;
            }
            else{
                balance--;
            }

            maxbalance = max(maxbalance,-balance);
        }

        return (maxbalance + 1) / 2;
    }
};