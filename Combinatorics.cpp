//Combinatorics


#define ll long long

ll nCr(ll n, ll r) 
{
  ll prod=1;

  for(ll i=n;i>n-r;i--)
    prod=prod*i;
  for(ll j=r;j>0;j--)
    prod=prod/j;
  
  return prod;
}

ll nPr(ll n, ll r) 
{
  ll prod=1;

  for(ll i=n;i>n-r;i--)
    prod=prod*i;
  
  return prod;
}