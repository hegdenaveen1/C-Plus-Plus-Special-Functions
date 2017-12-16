// find n'th fibonacci Number
// with O(Log n) arithmatic operations


const int MAX = 1000;
 

int f[MAX] = {0};
 

int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 

    if (f[n])
        return f[n];
 
    int k = (n & 1)? (n+1)/2 : n/2;
 
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
    return f[n];
}