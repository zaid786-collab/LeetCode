class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefixmx(n);
        vector<int> suffixmn(n);

        prefixmx[0] = nums[0];

        for(int i=1;i<n;i++) {
            prefixmx[i] = max(prefixmx[i-1],nums[i]);
        }

        suffixmn[n-1] = nums[n-1];

        for(int i=n-2;i>=0;i--){
            suffixmn[i] = min(suffixmn[i+1],nums[i]);
        }

        for(int i=0;i<n;i++) {
            if(prefixmx[i] - suffixmn[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};