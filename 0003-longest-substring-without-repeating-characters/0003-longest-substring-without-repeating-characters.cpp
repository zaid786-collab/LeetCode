class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int ans = 0;

        unordered_map<char,int> count;

        while(right < s.length()) {
            count[s[right] - 'a']++;
            right++;

            while(count[s[right - 1] - 'a'] > 1) {
                count[s[left] - 'a']--;
                left++;
            }

            ans = max(ans,right - left);
        }

        return ans;
    }
};