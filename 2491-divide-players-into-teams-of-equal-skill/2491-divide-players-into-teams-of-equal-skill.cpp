class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        int left = 0;
        int right = skill.size() - 1;
        int target = skill[left] + skill[right];
        long long chemistry = 0;

        while(left < right) {
            if(skill[left] + skill[right] != target) {
                return -1;
            }

            else {
                chemistry += (skill[left]*skill[right]);
            }

            left++;
            right--;
        }

        return chemistry;
    }
};