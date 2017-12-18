//Returns the index of key if found in already sorted vector, returns -1 if not found//



int TernarySearchRecursive(vector<int> &vect,int low,int high,int key)
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
            return TernarySearchRecursive(vect,low,mid1-1,key);
        else if(x>vect[mid2])
            return TernarySearchRecursive(vect,mid2+1,high,key);
        else
            return TernarySearchRecursive(vect,mid1+1,mid2-1,key);

    }
    return -1;
}


int TernarySearchIterative(vector<int> &vect,int low,int high,int key)
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