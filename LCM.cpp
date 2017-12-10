//Returns the Least Common Multiple of 2 Numbers based on Euclidian Arithmetic


int GCD(int a,int b)
{
    int c;
    while (b)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int LCM(int a,int b)
{
	int c = a*b;
	return c/GCD(a,b);
}