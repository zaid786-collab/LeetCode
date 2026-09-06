class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        int n = tickets.size();

        while(tickets[k] != 0) {
            for(int i=0;i<n;i++) {
                if(tickets[i] > 0) {
                    ans++;
                    tickets[i]--;
                }

                if(i == k && tickets[i] == 0) {
                    return ans;
                }
            }
        }

        return ans;
    }
};