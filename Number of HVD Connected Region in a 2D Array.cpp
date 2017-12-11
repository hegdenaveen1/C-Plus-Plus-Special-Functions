/*
Returns the number of connected regions either horizontally, vertically or diagonally in a 2D array

eg 

1 0 0 1 0 1 0 0
0 0 0 0 0 0 0 1
1 0 1 0 1 0 0 0
0 0 0 0 0 0 1 0
1 0 0 1 0 0 0 0
0 0 0 0 0 0 0 1
0 1 0 0 0 1 0 0
gives 1 and 1 and .....

1 1 0 0
0 1 1 0
0 0 1 0
1 0 0 1
gives 6 and 1.
*/





int dfs(int i,int j)
{
    int count=0;
    if(arr[i][j])
    {
        count++;
        arr[i][j]=false;
        count+=dfs(i,j);
    }
    if(arr[i-1][j-1])
    {
        count++;
        arr[i-1][j-1]=false;
        count+=dfs(i-1,j-1);
    }
    if(arr[i-1][j])
    {
        count++;
        arr[i-1][j]=false;
        count+=dfs(i-1,j);
    }
    if(arr[i-1][j+1])
    {
        count++;
        arr[i-1][j+1]=false;
        count+=dfs(i-1,j+1);
    }
    if(arr[i][j-1])
    {
        count++;
        arr[i][j-1]=false;
        count+=dfs(i,j-1);
    }
    if(arr[i+1][j-1])
    {
        count++;
        arr[i+1][j-1]=false;
        count+=dfs(i+1,j-1);
    }
    if(arr[i+1][j])
    {
        count++;
        arr[i+1][j]=false;
        count+=dfs(i+1,j);
    }
    if(arr[i+1][j+1])
    {
        count++;
        arr[i+1][j+1]=false;
        count+=dfs(i+1,j+1);
    }
    if(arr[i][j+1])
    {
        count++;
        arr[i][j+1]=false;
        count+=dfs(i,j+1);
    }
        
    return count;
}