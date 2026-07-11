class Solution {
public:
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        stack<int>st;
        int nse = -1;
        int pse = -1;
        int area = 0;

        for(int i=0;i<=n;i++){
            int currheight;
                if( i== n){
                    currheight = -1;
                }
                else{
                    currheight = heights[i];
                }
                while(!st.empty() && heights[st.top()] >currheight){
                nse = i;
                int height = heights[st.top()];
                st.pop();
                pse = st.empty()? -1 : st.top();
                
                int width = nse - pse -1;
                area = max(area,height * width);
            }
             st.push(i);
        }
        return area;
    }
};
