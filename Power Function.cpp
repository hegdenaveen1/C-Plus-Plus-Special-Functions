//Power function

int modpow(int a, int b, int mod) {
    int ans = 1;
    while (b) {
        if (b & 1) {
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return ans;
}

//Recursive Version
double pow(double a, int n) 
{
if(n == 0) return 1;
if(n == 1) return a;
double t = pow(a, n/2);
return t * t * pow(a, n%2);
}

//Iterative Version
double pow(double a, int n) 
{
double ret = 1;
while(n) 
{
if(n%2 == 1) ret *= a;
a *= a; n /= 2;
}
return ret;
}