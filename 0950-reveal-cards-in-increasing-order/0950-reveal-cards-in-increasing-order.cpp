class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        deque<int> qt;
        int n = deck.size();

        for(int i=0;i<n;i++) {
            qt.push_back(i);
        }

        vector<int> ans(n);

        for(int card : deck){
            int index = qt.front();
            qt.pop_front();

            ans[index] = card;

            if(!qt.empty()) {
                qt.push_back(qt.front());
                qt.pop_front();
            }
        }

        return ans;
    }
};