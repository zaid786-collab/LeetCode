class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> factor(n);

        for(int i=0;i<n;i++) {
            int x = nums[i];

            for(int p=2;p*p<=x;p++){
                if(x % p == 0) {
                    factor[i].push_back(p);

                    while(x % p == 0) {
                        x /= p;
                    }
                }
            }

            if(x > 1) {
                factor[i].push_back(x);
            }
        }

        unordered_map<int,int> freq;
        int left  = 0;
        int ans = 0;
        int distinct = 0;

        for(int right=0;right<n;right++) {

            for(int p : factor[right]) {
                if(freq[p] == 0) {
                    distinct++;
                }
                freq[p]++;
            }

            while(distinct > k) {
                for(int p : factor[left]) {
                    freq[p]--;

                    if(freq[p] == 0) {
                        distinct--;
                    }
                }
                left++;
            }

            ans = max(ans,right - left + 1);
        }

        return ans;
    }
};