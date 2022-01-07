class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      int m= mat.size(), n= mat[0].size();
        //If no. of elements are not equal, then not legal
      if((m*n)!=(r*c)) return mat;
        
        vector<vector<int>>v(r, vector<int>(c,0));
        int x=0,y=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v[i][j]= mat[x][y++];
                if(y==n){
                    y=y%n;
                    ++x;
                }
            }
        }
        return v;
    }
};