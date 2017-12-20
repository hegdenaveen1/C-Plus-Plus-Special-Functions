//Comparator to sort according to numerical value



bool NumericSort(string a,string b)
{
  while(a[0]=='0')
  {
    a.erase(a.begin());
  }
  while(b[0]=='0')
  {
    b.erase(b.begin());
  }  
    int n=a.length();
    int m=b.length();
  if(n==m)
    return a<b;
  return n<m;
}