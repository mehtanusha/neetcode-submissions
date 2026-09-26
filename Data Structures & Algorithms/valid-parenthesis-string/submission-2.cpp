class Solution {
public:
    bool checkValidString(string s) {
        int opencount = 0;

        //left to right 

        for(char c : s){
            if(c == '(' || c == '*'){
                opencount++;
            }
            else{
                opencount --;
            }
             if(opencount < 0){
                return false;
        }
        }

         int closecount = 0;

        //right to left 

        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ')' || s[i] == '*'){
                closecount++;
            }
            else{
                closecount--;
            }
            if(closecount < 0){
                return false;
        }
        }
        return true;
    }
};
