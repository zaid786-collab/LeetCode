class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1) {
            return 0;
        }

        int x = pow(2,n-2);

        if(k <= x) {
            return KthGrammar(n-1,k);
        }
        else {
            1 - return KthGrammer(n-1,k-x);
        }
    }
};