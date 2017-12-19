//Searches and Returns index of key in a vcector between given indexes inclusive,can be used for unsorted vector 




//Recursive Version (Subtract and Conquer)
int LinearSearch(vector<int> &vect,int low,int high,int key)
{
    if(low>high)
      return -1;
    if(vect[low]==key)
      return low;
    LinearSearch(vect,low+1,high,key);
}
//Search bothways Recursive
int LinearSearch(vector<int> &vect,int low,int high,int key)
{
    if(low>high)
      return -1;
    if(vect[low]==key)
      return low;
    if(vect[high]==key)
        return high;
    LinearSearch(vect,low+1,high-1,key);
}





//Iterative Version
int LinearSearch(vector<int> &vect,int low,int high,int key)
{
    for(int i=low;i<=high;i++)
    {
        if(vect[i]==key)
            return i;
    }
    return -1;
}
//Search bothways Iterative
int LinearSearch(vector<int> &vect,int low,int high,int key)
{
    for(int i=0;i<=high-low;i++)
    {
        if(vect[i+low]==key)
            return i+low;
        if(vect[high-i]==key)
            return high-i;
    }
    return -1;
}

