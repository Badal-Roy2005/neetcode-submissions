class Solution {
public:
void solve(vector<vector<char>>& board , string word , int i , int j , int k  ,bool& c ){
    if(c) return;
    if(k == word.size()){
        c = true;
        return ;
    }
    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return;
    if(board[i][j] != word[k]) return ;
    char t = '.';
    swap(board[i][j] , t);
    solve(board ,  word , i + 1, j , k + 1, c);
    solve(board ,  word , i , j + 1, k + 1, c);
    solve(board ,  word ,i - 1, j, k + 1, c);
    solve(board ,  word , i , j - 1, k + 1, c);
    swap(board[i][j] , t);
    
            
}
    


    bool exist(vector<vector<char>>& board, string word) {
        bool c = false;
        for(int i = 0 ;i < board.size() ;i++){
            for(int j = 0 ;j < board[0].size() ;j++){
            string temp = "";
            solve(board ,  word , i , j   , 0 , c);
            if(c) return true;
            }
        }
        return false;
    }
};
