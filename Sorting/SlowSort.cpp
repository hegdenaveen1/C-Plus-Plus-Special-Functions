//Returns the sorted vector after performing SlowSort
//It is a sorting algorithm that is of humorous nature and not useful. 
//It's based on the principle of multiply and surrender, a tongue-in-cheek joke of divide and conquer. 
//It was published in 1986 by Andrei Broder and Jorge Stolfi in their paper Pessimal Algorithms and Simplexity Analysis.
//This algorithm multiplies a single problem into multiple subproblems
//It is interesting because it is provably the least efficient sorting algorithm that can be built asymptotically, 
//and with the restriction that such an algorithm, while being slow, must still all the time be working towards a result.



void SlowSort(vector<int> &a, int i, int j)
{
  if(i>=j)
    return;
  int m=i+(j-i)/2;
  int temp;
  SlowSort(a, i, m);
  SlowSort(a, m + 1, j);
  if(a[j]<a[m])
  {
    temp=a[j];
    a[j]=a[m];
    a[m]=temp;
  }
  SlowSort(a, i, j - 1);
}
