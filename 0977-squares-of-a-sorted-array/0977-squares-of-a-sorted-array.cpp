class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int x=0;x<nums.size();x++){
            nums[x] = nums[x]*nums[x];
        }
        
  for(int i=0;i<nums.size()-1;i++){
            int mn = i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j] < nums[mn]) mn = j;
            }
            swap(nums[i],nums[mn]);
        }

        return nums;
    }
};
