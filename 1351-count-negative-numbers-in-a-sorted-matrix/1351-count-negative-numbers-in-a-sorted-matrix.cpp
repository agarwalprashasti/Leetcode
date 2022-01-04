class Solution {
public:
    //O(n+m)
    int countNegatives(vector<vector<int>>& grid) {
        int i=0, j= grid[0].size()-1,cnt=0;
        while(i<grid.size() && j>=0){
            if(grid[i][j]<0){
                cnt+= grid.size()-i;
                j--;
            }
            else i++;
        }
        return cnt;
    }
};