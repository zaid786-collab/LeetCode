class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int right = 0;
        int left = 0;
        int ans = 0;
        int distinct = 0;

        unordered_map<int,int> freq;

        while(right < fruits.size()) {
            freq[fruits[right]]++;
            right++;

            while(freq.size() > 2) {
                freq[fruits[left]]--;

                if(freq[fruits[left]] == 0) {
                    freq.erase(fruits[left]);
                }

                left++;
            }

            ans = max(ans,right - left);
        }

        return ans;
    }
};