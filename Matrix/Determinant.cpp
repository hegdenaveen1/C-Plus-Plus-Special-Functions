


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

int matrixdeterminant(vector< vector<int> > matrixA)
{   
    int size=matrixA.size();
    if(size==1)
    {
        return matrixA[0][0];
    }
    else if(size==2)
    {
        return (matrixA[1][1]*matrixA[0][0])-(matrixA[0][1]*matrixA[1][0]);
    }
    else
        {
            int ans=0;
            for(int i=0;i<size;i++)
            {

                if(i%2)
                {
                    ans=ans-matrixA[0][i]*matrixdeterminant(submatrix(matrixA,0,i));
                }
                else
                {
                    ans=ans+matrixA[0][i]*matrixdeterminant(submatrix(matrixA,0,i));
                }
            }
            return ans;
        }
}
