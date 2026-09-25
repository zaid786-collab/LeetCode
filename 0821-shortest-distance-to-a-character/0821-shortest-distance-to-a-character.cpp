class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> ans(n);

        int dist = n;

        for(int i=0;i<s.length();i++) {
            if(s[i] == c) {
                dist = 0;
            }else {
                dist++;
            }

            ans[i] = dist;
        }

        dist = n;
        for(int i=n-1;i>=0;i--) {
            if(s[i] == c) {
                dist = 0;
            }else {
                dist++;
            }

            ans[i] = min(ans[i],dist);
        }
        return ans;
    }
};