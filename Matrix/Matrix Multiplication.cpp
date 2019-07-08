//Matrix1(mat1row*mat1col) * Matrix2(mat1col*mat2col) 



vector<vector<ld>> multiplymatrix(vector<vector<ld>> &mat1,int mat1row,int mat1col, vector<vector<ld>> &mat2, int mat2col)
{
    vector<vector<ld>> result(mat1row);
    for(int i=0;i<mat1row;i++)
    {	
    	
    	for(int j=0;j<mat2col;j++)
    	{
    		ld x=0;
    		for(int k=0;k<mat1col;k++)
    		{
    			x+=mat1[i][k]*mat2[k][j];
    		}
    		result[i].push_back(x);
    	}
    }
    return result;
}
