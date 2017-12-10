//Returns the Greatest Common Divisor of 2 Numbers based on Euclidian Arithmetic


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