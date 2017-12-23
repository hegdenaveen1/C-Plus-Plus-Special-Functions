//Easy macro for quick output//



void printvector(vector<int> &v)
{
	int l=v.size();
	for(int i=0;i<l;i++)
	{
		cout << v[i] << " ";
	}	
}

void printarray(int arr[],int siz)
{
	for(int i=0;i<siz;i++)
	{
		cout << arr[i] << " ";
	}
}
