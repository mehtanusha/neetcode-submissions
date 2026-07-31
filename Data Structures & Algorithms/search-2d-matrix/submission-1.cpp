class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int totalcol = matrix[0].size();
        int totalrow = matrix.size();
        for(int i =0;i<totalrow*totalcol;i++){
            int row = i / totalcol;
            int col = i % totalcol;

            if(matrix[row][col] == target){
                return true;
            }
        }
        return false;

    }
};
