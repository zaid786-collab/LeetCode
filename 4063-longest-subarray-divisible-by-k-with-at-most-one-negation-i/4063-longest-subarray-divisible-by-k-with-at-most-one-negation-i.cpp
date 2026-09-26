class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            long long sum = 0;
            unordered_set<int> rem;

            for(int j = i; j < n; j++) {
                sum += nums[j];

                int need = ((sum % k) + k) % k;

                int value = ((2LL * nums[j]) % k + k) % k;
                rem.insert(value);

                if(sum % k == 0) {
                    ans = max(ans, j - i + 1);
                }

                if(rem.count(need)) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};