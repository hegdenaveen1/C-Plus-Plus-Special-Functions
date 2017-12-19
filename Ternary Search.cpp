//Returns the index of key if found in an already sorted vector, returns -1 if not found//



//Recursive Version
int TernarySearch(vector<int> &vect,int low,int high,int key)
{
    if(high>=low)
    {
        int mid1 = low + (high-low)/3;
        int mid2 = high -  (high-low)/3;
        if(vect[mid1] == key)
            return mid1;
        if(vect[mid2] == key)
            return mid2;
        if(x<vect[mid1])
            return TernarySearch(vect,low,mid1-1,key);
        else if(x>vect[mid2])
            return TernarySearch(vect,mid2+1,high,key);
        else
            return TernarySearch(vect,mid1+1,mid2-1,key);

    }
    return -1;
}

//Iterative Version
int TernarySearch(vector<int> &vect,int low,int high,int key)
{
    while(high>=low)
    {
        int mid1 = low + (high-low)/3;
        int mid2 = high -  (high-low)/3;
        if(vect[mid1] == key)
            return mid1;
        if(vect[mid2] == key)
            return mid2;
        if(x<vect[mid1])
            high=mid1-1;
        else if(x>vect[mid2])
            low=mid2+1;
        else
            {
                low=mid1+1;
                high=mid2-1;
            }

    }
    return -1;
}
