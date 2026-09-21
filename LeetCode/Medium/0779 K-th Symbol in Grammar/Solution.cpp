class Solution {
public:
    int kthGrammar(int n, int k) {
        vector<int> prev(1,0);
        vector<int> main;

        int i = n;
        while(i--) {

            vector<int> next;

            int x = prev.size();
            for(int i=0;i<x;i++) {
                if(prev[i] == 0) {
                    next.push_back(0);
                    next.push_back(1);
                }
                else if(prev[i] == 1) {
                    next.push_back(1);
                    next.push_back(0);
                }
            }
            prev = next;
        }

        main = prev;

        return main[k-1];
    }
};