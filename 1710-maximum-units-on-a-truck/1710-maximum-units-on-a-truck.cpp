class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        int n = boxTypes.size();

        vector<pair<int,int>> units(n, make_pair(0, 0));

        for(int i = 0; i < n; i++) {
            int unitPerBox = boxTypes[i][1];
            units[i] = make_pair(unitPerBox, i);
        }

        sort(units.rbegin(), units.rend());

        int ans = 0;

        for(int i = 0; i < n; i++) {

            int index = units[i].second;

            int boxes = boxTypes[index][0];
            int unitPerBox = boxTypes[index][1];

            if(boxes <= truckSize) {
                ans += boxes * unitPerBox;
                truckSize -= boxes;
            }
            else {
                ans += truckSize * unitPerBox;
                truckSize = 0;
                break;
            }
        }

        return ans;
    }
};