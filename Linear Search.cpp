//Searches and Returns index of key in a vcector between given indexes inclusive,can be used for unsorted vector/// 



int LinearSearch(vector<int> &vect,int low,int high,int key)
{
    for(int i=low;i<=high;i++)
    {
        if(vect[i]==key)
            return i;
    }
    return -1;
}