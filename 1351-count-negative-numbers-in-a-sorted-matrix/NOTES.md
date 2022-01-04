**1. O(n+m) solution**
int countNegatives(vector<vector<int>>& grid) {
//Time Complexity:O(n+m)
int n=grid.size();
int m=grid[0].size();
int i=0,j=m-1,cnt=0;
while(i<n && j>=0){
if(grid[i][j]<0){
//if negative then all elements below it will be negative since it is sorted
cnt+=(n-i);
j=j-1;
}
else{
i=i+1;
}
}
return cnt;
}
​
****  2. Binary Search Solution O(mlogn)****
Check submitted solution