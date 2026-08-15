class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeat = 0;
        int miss = 0;
        unordered_map<int,int>freq;
        for(auto row : grid){
            for(int num : row){
                freq[num]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(!freq.count(i)){
                miss = i;
            }
            else if(freq[i] == 2){
                repeat = i;
            }
        }
        return {repeat,miss};
    }
};