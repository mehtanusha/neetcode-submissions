class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
            int cnt = 0;
            for(int num : nums){
                if(num >= i){
                    cnt++;
                }
            }
            if(cnt == i){
                return i;
            }
        }
        return -1;
    }
};