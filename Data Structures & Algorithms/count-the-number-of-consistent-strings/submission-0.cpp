class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st;

        for(char ch : allowed){
            st.insert(ch);
        }
        int ans = 0;

        for(string s : words){
            bool flag = false;

            for(char c : s){
                if(st.find(c) != st.end()){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans++;
            }
        }
        return ans;
    }
};