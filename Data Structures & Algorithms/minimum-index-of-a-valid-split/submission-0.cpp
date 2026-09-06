class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size();

        for(int &num : nums){
            freq[num]++;
        }

        int dominant = 0;
        int totalfreq = 0;
        for(auto &it : freq){
            if(it.second > n/2){
                dominant = it.first;
                totalfreq = it.second;
                break;
            }
        }

        int leftsize = 0;
        int rightsize = 0;
        int leftfreq = 0;
        int rightfreq = 0;

        for(int i = 0;i<n-1;i++){ //because hame do empty parts me divide krna he 
            if(nums[i] == dominant){
                leftfreq++;
            }
            leftsize = i+1;
            rightsize = n-i-1;
            rightfreq = totalfreq - leftfreq;

            if(leftfreq > leftsize/2 && rightfreq > rightsize/2){
                return i;
            }

        }
        return -1;
    }
};