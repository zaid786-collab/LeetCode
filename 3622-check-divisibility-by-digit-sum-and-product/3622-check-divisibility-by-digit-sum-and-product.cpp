class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int original = n;

        int div = 0;
        while(n > 0) {
            int digit = n%10;
            sum += digit;
            product *= digit;
            n /= 10;
        }

        div = sum + product;

        if(original % div == 0) {
            return true;
        }
        return false;
    }
};