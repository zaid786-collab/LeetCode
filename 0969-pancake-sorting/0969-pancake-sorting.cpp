class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for(int size=n;size>1;size--) {

            int maxindex = 0;

            for(int i=0;i<size;i++) {
                if(arr[i] > arr[maxindex]) {
                    maxindex = i;
                }
            }

            if(maxindex == size - 1) {
                continue;
            }

            if(maxindex != 0) {
                reverse(arr.begin(),arr.begin() + maxindex + 1);
                ans.push_back(maxindex+1);
            }

            reverse(arr.begin(),arr.begin() + size);
            ans.push_back(size);
        }
        return ans;
    }
};