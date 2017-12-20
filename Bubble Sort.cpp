//Returns a sorted array using Bubble Sort



void BubbleSort(vector<int> &v,int first,int last)
{
  bool sorted=false;
  int i=first+1;
  while(i<=last&&!sorted)
  {
    sorted=true;
    for(int j=first+1;j<=last;j++)
    {
      if(v[j-1]>v[j])
    {
      swap(v[j-1],v[j]);
      sorted=false;
    }
    }
    i++;
  }
}