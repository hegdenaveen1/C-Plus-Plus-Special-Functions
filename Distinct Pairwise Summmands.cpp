// Returns Distinct Summands. 8=1+2+5///6=1+2+3///20=1+2+3+4+5+10////



vector<int> DistinctPairwiseSummands(int n) 

{
  vector<int> summands;
  int l=1;

if(n<=2*l)
{
	summands.push_back(n);
}
else
{
  while(2*l<n)
  {
    summands.push_back(l);
    n=n-l;
    l++;
  }
  summands.push_back(n);
 }
  
  return summands;

}