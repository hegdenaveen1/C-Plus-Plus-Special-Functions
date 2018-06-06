//Returns Erathosthenes Sieve in the form of boolean vector

vector<bool> SieveofErathosthenes(int n)
{
    vector<bool> isprime(n+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int p=2;p*p<=n;p++)
    {
        if(isprime[p])
        {
            for(int i=2*p;i<=n;i+=p)
            {
                isprime[i]=false;
            }
        }
    }
    return isprime;
}
