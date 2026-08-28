class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[2] = {0,0};

        for(int num : students){
            count[num]++;
        }

        for(int num : sandwiches){
            if(count[num] == 0){
                break;
            }
            count[num]--;
        }
        return count[0] + count[1];
    }
};