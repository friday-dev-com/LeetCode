class Solution {
public:
    bool solve(vector<vector<char>>& board, string word, int i, int j, int &row, int &col, int index){

        if( index == word.size()){
            return true;
        }

        char val = board[i][j];
        board[i][j] = '#';

        bool sol = false;

        if( i-1 >= 0 && board[i-1][j] == word[index]){
            sol = sol ||solve(board, word, i-1, j, row, col, index + 1);
        } 

        
        if( i+1 < row && board[i+1][j] == word[index]){
            sol = sol ||solve(board, word, i+1, j, row, col, index + 1);
        } 

        if( j-1 >= 0 && board[i][j-1] == word[index]){
            sol = sol ||solve(board, word, i, j-1, row, col, index + 1);
        } 

        if( j+1 < col && board[i][j+1] == word[index]){
            sol = sol || solve(board, word, i, j+1, row, col, index + 1);
        }

        board[i][j] = val;
        return sol;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        
        for( int i = 0; i < row; i++){
            for( int j = 0; j < col; j++){
                
                if( board[i][j] == word[0]){
                    if(solve(board, word, i, j, row, col,1)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};