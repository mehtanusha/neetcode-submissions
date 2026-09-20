class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();

        int ans = INT_MAX;
        int cnt = 0;
        int size = 0;

        int i = 0;
        int j = 0;

        while(j<n){
            size++;
            if(blocks[j] == 'W'){
                cnt++;
            }

            if(size == k){
                ans = min(ans,cnt);
                if(blocks[i] == 'W'){
                    cnt--;
                }
                size--;
                i++;
            }
            j++;
        }
        return ans;
    }
};