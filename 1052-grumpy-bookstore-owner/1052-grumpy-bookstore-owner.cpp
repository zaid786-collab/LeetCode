class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int k) {
        int n = grumpy.size();
        int satisfied = 0;
        vector<int> extra(n,0);
        
        for(int i=0;i<n;i++) {
            if(grumpy[i] == 0) {
                satisfied += customers[i];
            }
            else {
                extra[i] = customers[i];
            }
        }

        int unhappy = 0;
        int left = 0;
        int right = 0;
        int mx = 0;

        while(right < n) {
            unhappy += extra[right];
            right++;

            while((right - left) >= k) {
                mx = max(mx,unhappy);
                unhappy -= extra[left];
                left++;
            }
        }

        return mx + satisfied;
    }
};