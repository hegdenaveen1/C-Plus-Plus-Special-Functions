//Returns sorted vector after applying Selection Sort



//Recursive Version
vector <int> SelectionSort(vector<int> &vect, int start,int end)
{
  if(start==end)
    return vect;
  int minimumindex=start,minimum=vect[start];
  for(int i=start+1;i<=end;i++)
  {
    if(vect[i]<minimum)
    {
      minimum=vect[i];
      minimumindex=i;
    }
  }
  swap(vect[start],vect[minimumindex]);
  SelectionSort(vect,start+1,end);
  return vect;
}



//Iterative Version
vector <int> SelectionSort(vector<int> &vect, int start,int end)
{
  while(start!=end)
  {
    int minimumindex=start,minimum=vect[start];
  for(int i=start+1;i<=end;i++)
  {
    if(vect[i]<minimum)
    {
      minimum=vect[i];
      minimumindex=i;
    }
  }
  swap(vect[start],vect[minimumindex]);
  start=start+1;
  }
  return vect;
}
