int Partition(vector<int> &a,int low,int high)
{
  int pivot=a[low];
  int j=low;
  for(int i=low+1;i<=high;i++)
  {
    if(a[i]<=pivot)
    {
      j++;
      swap(a[j],a[i]);
    }
  }
  swap(a[j],a[low]);
  return j;
}


long long  QuickSort(vector<int> &a,int left,int right)
{
  long long count =0;
  if(left>=right)
    return count;
  else
  {
    count = right -left ;
    int part = Partition(a,left,right);
    swap(part,left);
    count += QuickSort(a,left,part-1);
    count += QuickSort(a,part+1,right);
  }
  return count;
}
