class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int ans = 0;
        int zeros = 0;

        while(right < nums.size()) {
            if(nums[right] == 0){
                zeros++;
            } 
            right++;

            while(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }

            ans = max(ans,right - left);
        }

        return ans;
    }
};