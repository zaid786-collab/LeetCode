class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);
        if(k == 0) {
            for(int i=0;i<code.size();i++) {
                code[i] = 0;
            }
            return code;
        }


        else if (k > 0) {
            int sum = 0;

            for (int j = 1; j <= k; j++) {
                sum += code[j % n];
            }

            for(int i=0;i<n;i++) {
                ans[i] = sum;
                sum = sum - code[(i+1) % n] + (code[(i+k+1) % n]);
            }
        }

        else {
            int sum = 0;
            int steps = abs(k);

            for(int j=1;j<=steps;j++) {
                sum += code[(0 - j + n) % n];
            }

            for(int i=0;i<n;i++) {
                ans[i] = sum;

                sum -= code[(i - steps +n)  % n];
                sum += code[i];
            }
        }

        return ans;
    }
};