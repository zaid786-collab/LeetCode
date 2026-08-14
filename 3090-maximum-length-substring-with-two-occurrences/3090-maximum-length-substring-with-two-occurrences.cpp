class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int right = 0;
        int ans = 0;
        vector<int> count(26,0);

        while(right < s.length()) {
            count[s[right] - 'a']++;
            right++;

            while(count[s[right - 1] - 'a'] > 2){
                count[s[left] - 'a']--;
                left++;
            }

            ans = max(ans,right - left);
        }

        return ans;
    }
};