//Returns the Sorted vector after using QuickSort Method.





int Partition(vector<int> &vec,int low,int high)
{
int pivot=vec[low];
int j=low;
for(int i=low+1;i<=high;i++)
{
  if(vec[i]<=pivot)
  {
    j++;
    swap(vec[j],vec[i]);
  }
}
swap(vec[j],vec[low]);
return j;
}


void QuickSort(vector<int> &vect,int left,int right)
{
  if(left>=right)
    return;
  int part = Partition(vect,left,right);
  QuickSort(vect,left,part-1);
  QuickSort(vect,part+1,right);

}

