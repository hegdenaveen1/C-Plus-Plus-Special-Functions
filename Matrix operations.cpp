//General Matrix Operations

int a[1000][1000], b[1000][1000], c[1000][1000];

void matrixmultiplication(int m,int p,int n)
{
	//returns the product of a m*p and p*n matrix
	for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
}

int matrixdeterminent2x2()
{
	return (a[1][1]*a[0][0])-(a[0][1]*a[1][0]);
}