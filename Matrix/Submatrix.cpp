

vector< vector<int> > submatrix(vector<vector<int>> matrixA,int row,int column)
{
    vector< vector<int>> matrixB=matrixA;

    if(matrixB.size()>row)
    {
        matrixB.erase(matrixB.begin()+row);
    }
    for(int i=0;i<matrixB.size();i++)
    {
        if(matrixB[i].size()>column)
        {
            matrixB[i].erase(matrixB[i].begin()+column);
        }
    }
    return matrixB;
}