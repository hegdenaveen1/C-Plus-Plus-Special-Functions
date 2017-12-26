***************************************************************
////////////////////Returns Nth fibonacci//////////////////////
///////////////////////NO LIMIT////////////////////////////////

std::string add(std::string a, std::string b) 
{ 
    std::string temp = "";
    while ((int)a.length() < (int)b.length()) {
        a = "0" + a;
    }
    while ((int)b.length() < (int)a.length()) {
        b = "0" + b;
    }
    int carry = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        char val = (char)(((a[i] - 48) + (b[i] - 48)) + 48 + carry);
        if (val > 57) {
            carry = 1;
            val -= 10;
        }
        else {
            carry = 0;
        }
        temp = val + temp;
    }
    if (carry != 0) {
        temp = "1" + temp;
    }
    while (temp[0] == '0' && temp.length() != 1) {
        temp = temp.substr(1);
    }
    return temp;
}

void fib_Accurate(long long n) 
{
    std::string tmp = "";
    std::string fibMinus1 = "1";
    std::string fibMinus2 = "0";
    std::string comma = ", ";
        for (long long i = 0; i < n; i++) 
        {
            tmp = add(fibMinus1, fibMinus2);
            
            fibMinus2 = fibMinus1;
            fibMinus1 = tmp;
        }
    std::cout <<  fibMinus2;
}


****************************************************************
//////Returns first N fibonaccis separated by comma////////////
///////////////////////NO LIMIT////////////////////////////////

std::string add(std::string a, std::string b) { // ADDED 
    std::string temp = "";
    while ((int)a.length() < (int)b.length()) {
        a = "0" + a;
    }
    while ((int)b.length() < (int)a.length()) {
        b = "0" + b;
    }
    int carry = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        char val = (char)(((a[i] - 48) + (b[i] - 48)) + 48 + carry);
        if (val > 57) {
            carry = 1;
            val -= 10;
        }
        else {
            carry = 0;
        }
        temp = val + temp;
    }
    if (carry != 0) {
        temp = "1" + temp;
    }
    while (temp[0] == '0' && temp.length() != 1) {
        temp = temp.substr(1);
    }
    return temp;
}

void fib_Accurate(long long n) { // ADDED
    std::string tmp = "";
    std::string fibMinus1 = "1";
    std::string fibMinus2 = "0";
    std::string comma = ", ";
        for (long long i = 0; i < n; i++) {
            tmp = add(fibMinus1, fibMinus2);
            std::cout << comma <<  fibMinus2;
            fibMinus2 = fibMinus1;
            fibMinus1 = tmp;
    }
}




****************************************************************
// Returns nth fibonacci number after storing it in a matrix;

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


*****************************************************************
//Stores Nth Fibonacci in variable x, after taking modulo m

void fib(ll n, ll&x, ll&y, ll m)
{
    if(n==0)
    {
        x = 0;
        y = 1;
        return ;
    }
     
    if(n&1)
    {
        fib(n-1, y, x, m);
        y=(y+x)%mod;
    }
    else
    {
        ll a, b;
        fib(n>>1, a, b , m);
        y = (a*a+b*b)%m;
        x = (a*b + a*(b-a+mod))%m;
    }
}

**************************************************************
// Returns the last digit of sum of first n fibonacci number

unsigned long long calc_fib(unsigned long long int n) 
{

    n = (n+2)%60;
    unsigned long long int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    unsigned long long int res = 1;
    for(unsigned long long int i = 2; i<=n;i++){
        fib[i] = (fib[i-1]%10 + fib[i-2]%10)%10;
        // res = res + fib[i];
    }
    // cout<<fib[n]<<"\n";
    if(fib[n] == 0){
        return 9;
    }
    return (fib[n]%10-1);
}
