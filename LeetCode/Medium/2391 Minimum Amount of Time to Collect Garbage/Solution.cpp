class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int lg = 0,lm = 0,lp = 0;
        int ans = 0;

        for(int i=0;i<garbage.size();i++) {
            for(char ch : garbage[i]) {
                if(ch == 'G') {
                    ans++;
                    lg = i;
                }
                else if(ch == 'P') {
                    ans++;
                    lp = i;
                }
                else {
                    ans++;
                    lm = i;
                }
            }
        }

        for(int i=0;i<lg;i++){
            ans += travel[i];
        }

        for(int i=0;i<lp;i++){
            ans += travel[i];
        }

        for(int i=0;i<lm;i++){
            ans += travel[i];
        }

        return ans;
    }
};