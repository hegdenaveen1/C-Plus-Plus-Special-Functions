//This Programme returns the number of operations required to convert one string to another
//Insertions Deletions and Swapping Elements are allowed

//EDistance[i-1][j] can stand for Insertion,EDistance[i][j-1] can stand for Deletion, vice versa
//EDistance[i-1][j-1] stands for Match and Mismatch or Swapping. 
//You can alter it accordingly if some operation is restricted or not allowed


int minimum(int a,int b,int c)
{
  if(a<=b)
  {
    if(a<=c)
      return a;
    return c;
  }
  if(b<=c)
    return b;
  return c;
}

int EditDistance(string a,string b)
{
  int la=a.length();
  int lb=b.length();

  int EDistance[la+1][lb+1];

  for(int i=0;i<=la;i++)
  {
    EDistance[i][0]=i;
  }

  for(int i=0;i<=lb;i++)
  {
    EDistance[0][i]=i;
  }

  for(int i=1;i<=la;i++)
  {
    for(int j=1;j<=lb;j++)
    {
      if(a[i-1]==b[j-1])
      {
        EDistance[i][j] = minimum((EDistance[i-1][j]+1),(EDistance[i][j-1]+1),(EDistance[i-1][j-1]));
      }
      else
      {
        EDistance[i][j] = minimum((EDistance[i-1][j]+1),(EDistance[i][j-1]+1),(EDistance[i-1][j-1]+1));
      } 
    }
  }

  return EDistance[la][lb];
}