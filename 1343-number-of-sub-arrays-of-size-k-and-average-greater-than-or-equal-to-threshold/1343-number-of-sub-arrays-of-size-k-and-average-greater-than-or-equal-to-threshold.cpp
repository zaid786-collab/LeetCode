class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int ans = 0;

        while(right < arr.size()) {
            sum += arr[right];
            right++;

            if(right - left == k){
                if(sum >= k*threshold){
                    ans++;
                }
                sum -= arr[left];
                left++;
            }
        }

        return ans;
    }
};