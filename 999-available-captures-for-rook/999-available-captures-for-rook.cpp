class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x=0, y=0, capture=0;
        //Find position of rook
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    x=i;y=j;break;
                }
            }
        }
        
        //upwards
        int i= x, j=y;
        while(i>=0 && board[i][j]!='B'){
            if(board[i][j]=='p'){
                capture++;
                break;
            }
            i--;
        }
        
        //downwards
         i= x, j=y;
        while(i<=7 && board[i][j]!='B'){
            if(board[i][j]=='p'){
                capture++;
                break;
            }
            i++;
        }
        
        //left
        i= x, j=y;
        while(j>=0 && board[i][j]!='B'){
            if(board[i][j]=='p'){ 
                capture++;
                break;
            }
            j--;
        }
        
        //right
        i= x, j=y;
        while(j<=7 && board[i][j]!='B'){
            if(board[i][j]=='p'){
                capture++;
                break;
            }
            j++;
        }
        
        return capture;
        
    }
};