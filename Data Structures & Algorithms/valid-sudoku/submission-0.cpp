class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();

        for(int i = 0; i < n; i++) {

            vector<int> row(10,false);
            vector<int> col(10,false);

            for(int j = 0; j < n; j++) {

                if(board[i][j] != '.') {

                    int r = board[i][j] - '0';

                    if(row[r]) return false;

                    row[r] = true;
                }

                if(board[j][i] != '.') {

                    int c = board[j][i] - '0';

                    if(col[c]) return false;

                    col[c] = true;
                }
            }
        }

        for(int rowstart = 0; rowstart < 9; rowstart += 3) {

            for(int colstart = 0; colstart < 9; colstart += 3) {

                vector<int> num(10,false);

                for(int i = rowstart; i < rowstart + 3; i++) {

                    for(int j = colstart; j < colstart + 3; j++) {

                        if(board[i][j] != '.') {

                            int x = board[i][j] - '0';

                            if(num[x]) return false;

                            num[x] = true;
                        }
                    }
                }
            }
        }

        return true;
    }
};