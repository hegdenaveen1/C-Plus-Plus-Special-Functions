//Returns the index of key if found in an already sorted vector, returns -1 if not found//


//Recursive Version
int BinarySearch(vector<int> &vect,int low,int high,int key)
{
    if(high<low)
        return -1;
    int mid = (high+low)/2;
    if(vect[mid]==key)
        return mid;
    else if(key<vect[mid])
    {
        BinarySearch(vect,low,mid-1,key);
    }
    else
    {
        BinarySearch(vect,mid+1,high,key);
    }
}


//Iterative Version
int BinarySearch(vector<int> &vect,int low,int high,int key)
{
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(vect[mid]==key)
            return mid;
        else if(key<mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
