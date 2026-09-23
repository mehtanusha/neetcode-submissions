class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        int n = s.size();

        //left to right

        for(int i=0;i<n;i++){
            if(s[i] == '('){
                count ++;
            }
            else if(s[i] == ')'){
                if(count > 0){
                    count --;
                }
                else{
                    s[i] = '#';
                }
            }
        }

        count = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i] == ')'){
                count ++;
            }
            else if(s[i] == '('){
                if(count > 0){
                    count --;
                }
                else{
                    s[i] = '#';
                }
            }
        }

        string ans = "";

        for(char ch : s){
            if(ch != '#'){
                ans += ch;
            }
        }
        return ans;
    }
};
