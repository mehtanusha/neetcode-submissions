class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<long long,int>freq;

        for(auto  &row : wall){
            long long gap = 0;
            for(int i=0;i<row.size()-1;i++){
                gap += row[i];
                freq[gap]++;
            }
        }
        int maxgap = 0;
        for(auto &it : freq){
            maxgap = max(maxgap,it.second);
        }
        return wall.size() - maxgap;
    }
};