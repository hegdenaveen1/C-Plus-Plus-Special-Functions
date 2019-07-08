


vector< vector<int>> addmatrix(vector<vector<int>> matrixA,vector<vector<int>> matrixB)
{
    for(int i=0;i<matrixA.size();i++)
    {
        for(int j=0;j<matrixA[i].size();j++)
        {
            matrixA[i][j]+=matrixB[i][j];
        }
    }
    return matrixA;
}
