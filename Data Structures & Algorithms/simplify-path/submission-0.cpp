class Solution {
public:
    string simplifyPath(string path) {
        string token = "";
        vector<string>st;

        stringstream ss(path);

        while(getline(ss,token,'/')){
            if(token == "" || token == "."){
                continue;
            }
            if(token != ".."){
                st.push_back(token);
            }else if(!st.empty()){
                st.pop_back();
            }
        }
        if(st.empty()){
            return "/";
        }
        string ans = "";

        for(auto &it : st){
            ans = ans + "/" + it;
        }
        return ans ;
    }
};