

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