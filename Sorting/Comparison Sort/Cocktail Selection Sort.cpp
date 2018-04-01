//Returns Sorted vector after performing Cocktail Selection Sort



//Iterative Version

void CocktailSelectionSort(vector <int> &vec,int low,int high)
{
  while(low<=high)
  {
  int minimum=vec[low];
  int minimumindex=low;
  int maximum=vec[high];
  int maximumindex=high;

  for(int i=low;i<=high;i++)
  {
    if(vec[i]>=maximum)
    {
      maximum=vec[i];
      maximumindex=i;
    }
    if(vec[i]<=minimum)
    {
      minimum=vec[i];
      minimumindex=i;
    }
  }
  if(low!=maximumindex||high!=minimumindex)
  {
  swap(vec[low],vec[minimumindex]);
  swap(vec[high],vec[maximumindex]);
  }
  else
  {
    swap(vec[low],vec[high]);
  }
 
  low++;
  high--;
}
    
}


//Recursive Version

void CocktailSelectionSort(vector <int> &vec,int low,int high)
{
  
  if(low>=high)
  	return;
  
  int minimum=vec[low];
  int minimumindex=low;
  int maximum=vec[high];
  int maximumindex=high;

  for(int i=low;i<=high;i++)
  {
    if(vec[i]>=maximum)
    {
      maximum=vec[i];
      maximumindex=i;
    }
    if(vec[i]<=minimum)
    {
      minimum=vec[i];
      minimumindex=i;
    }
  }
  if(low!=maximumindex||high!=minimumindex)
  {
  swap(vec[low],vec[minimumindex]);
  swap(vec[high],vec[maximumindex]);
  }
  else
  {
    swap(vec[low],vec[high]);
  }
 	
  CocktailSelectionSort(vec,low+1,high-1);

    
}