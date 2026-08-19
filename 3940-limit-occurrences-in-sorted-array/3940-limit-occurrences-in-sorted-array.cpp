class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int n = nums.size();
        vector<int> ans;

        for(int x : nums){
            if(freq[x] < k) {
                ans.push_back(x);
                freq[x]++;
            }
        }
        
        return ans;
    }
};