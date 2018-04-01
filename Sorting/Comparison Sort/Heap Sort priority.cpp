//Returns a sorted vector after sorting using priority queue



vector<int> HeapSortbypriorityQ (vector<int> v)
{
	priority_queue <int> Q;
	vector<int> ans(v.size());
	for(int i=0;i<v.size();i++)
	{
		Q.push(v[i]);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		ans[i]=Q.top();
		Q.pop();
	}
	return ans;
}