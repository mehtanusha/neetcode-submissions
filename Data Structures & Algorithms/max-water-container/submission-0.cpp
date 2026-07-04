class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i =0;
        int j = n-1;
        int area = 0;
        int ans = 0;

        while(i<j){
            int h = min(heights[i],heights[j]);
            int width = j-i;

            area = h*width;
            ans = max(ans,area);
            
            if(heights[i] < heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};