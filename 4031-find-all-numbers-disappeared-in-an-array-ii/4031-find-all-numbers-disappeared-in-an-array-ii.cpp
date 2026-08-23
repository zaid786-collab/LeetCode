class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;
        long long prev = lower;

        for(int x : nums) {
            if(x < lower || x > upper) {
                continue;
            }

            else {
                if(x > prev) {
                    ans.push_back({(int)prev,x-1});
                }
                prev = (long long)x+1;
            }
        }

        if(prev <= upper) {
            ans.push_back({(int)prev,upper});
        }
        return ans;
    }
};