class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;

        int n = nums2.size();
        st.push(nums2[0]);
        int i = 0;
        while(i<n){
            while(!st.empty() && st.top() < nums2[i]){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
            i++;
        }
        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};