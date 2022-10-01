/*N-QUEENS PUZZLE PROBLEM

The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]
 

Constraints: 1 <= n <= 9 

*/
class Solution {
    
    public boolean isSafe (int row, int col, char[][]board) {
        //Horizontal
        for(int i =0 ; i < board.length ; i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        
        //Vertical
        for(int i =0 ; i < board.length ; i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //UpperLeft
        int r = row;
        for(int c = col ; c>=0 && r>=0; r-- ,c--){
             if(board[r][c]=='Q'){
                return false;
            }
        }
        //upper right
        for(int c = col ; c< board.length && r>=0; r-- ,c++){
             if(board[r][c]=='Q'){
                return false;
            }
        }
        
        //lower left
        r=row;
        for(int c = col ; c>=0 && r<board.length; r++ ,c--){
             if(board[r][c]=='Q'){
                return false;
            }
        }
        //lower right
        for(int c = col ; c< board.length && r<board.length; r++ ,c++){
             if(board[r][c]=='Q'){
                return false;
            }
        }
        return true;
    }
    
    public void saveBoard(char[][]board ,List<List<String>> allBoards ){
        
       String place_queens = "";
       List<String> newBoard = new ArrayList<>();
    
        for(int i =0 ; i< board.length ; i++){
            place_queens = "";
            for(int j = 0; j < board[0].length ; j++){
                if(board[i][j]=='Q'){
                    place_queens += 'Q';
                }
                else{
                    place_queens += '.';
                }
                
            }
            
            newBoard.add(place_queens);

            
        }
        allBoards.add(newBoard);

    }
    public void helper(char[][]board ,List<List<String>> allBoards,int col )
    {
        
        if( col==board.length){
            saveBoard(board,allBoards);
            return;
        }
        for(int row =0; row< board.length;row++){
            
            if(isSafe(row ,col, board)){
                board[row][col]='Q';
                helper(board,allBoards,col+1);
                board[row][col]='.';
             }
        }
    }
    public List<List<String>> solveNQueens(int n) {
        char[][] board  =new char [n][n];
        List<List<String>> allBoards = new ArrayList<>();
        
        helper(board,allBoards,0);
        return allBoards;
    }
}