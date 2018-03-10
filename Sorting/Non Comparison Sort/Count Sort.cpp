//Count Sort Algorithm


vector<int> CountSort(vector<int> input)
{
	int l=input.size();
	int ksize=0;
	for(int i=0;i<l;i++)
	{
		ksize = max(input[i],ksize);
	}
	vector<int> ans(ksize+1);

	for(int i=0;i<l;i++)
	{
		ans[input[i]]++;
	}
	vector<int> output(l);
	int j=0,i=0;
	while(j<l&&i<ksize+1)
	{
		while(ans[i]>0)
		{
			output[j]=i;
			ans[i]--;
			j++;
		}
		i++;
	}
	return output;
}