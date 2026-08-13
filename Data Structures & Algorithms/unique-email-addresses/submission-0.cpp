class Solution {
public:
    string standardform(string email){
        int pos = email.find('@');
        string local = email.substr(0,pos);
        string domain = email.substr(pos);

        string localpart = "";
        for(char c : local){
            if(c == '.'){
                continue;
            }
            if(c == '+'){
                break;
            }
            localpart += c;
        }
        return (localpart + domain);
    }
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;

        for(string s : emails){
            st.insert(standardform(s));
        }
        return st.size();
    }
};