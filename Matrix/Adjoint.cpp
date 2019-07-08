


vector< vector<real> > matrixtranspose(vector< vector<real>> matrixA)
{
    real nrows=matrixA.size();
    real ncolumns=matrixA[0].size();

    vector<vector<real>> matrixB(ncolumns);

    for(real i=0;i<nrows;i++)
    {
        for(real j=0;j<ncolumns;j++)
        {
            real x=matrixA[i][j];
            matrixB[j].push_back(x);
        }
    }
    return matrixB;
}


vector< vector<real> > submatrix(vector<vector<real>> matrixA,real row,real column)
{
    vector< vector<real>> matrixB=matrixA;

    if(matrixB.size()>row)
    {
        matrixB.erase(matrixB.begin()+row);
    }
    for(real i=0;i<matrixB.size();i++)
    {
        if(matrixB[i].size()>column)
        {
            matrixB[i].erase(matrixB[i].begin()+column);
        }
    }
    return matrixB;
}

real matrixdeterminant(vector< vector<real> > matrixA)
{   
    real size=matrixA.size();
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
            real ans=0;
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


vector< vector<real> > matrixadjoint(vector<vector<real>> matrixA)
{

real n=matrixA.size();

vector<vector<real>> matrixB(n);

for(real i=0;i<n;i++)
{   
    for(real j=0;j<n;j++)
    {
        real x=matrixdeterminant(submatrix(matrixA,i,j));
        matrixB[i].push_back(x);
    }

}

for(int i=0;i<n;i++)
{   
    for(int j=0;j<n;j++)
    {
        if((i+j)%2)
        {
            matrixB[i][j]=matrixB[i][j]*(-1);
        }
    }

}

matrixB=matrixtranspose(matrixB);

return matrixB;
}