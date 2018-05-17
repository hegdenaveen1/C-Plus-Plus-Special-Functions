

void TernaryGeneratorPrint(int n)
{
    int i=1;
    while(i<=n)
    {
    	string s="";
    	int x=i;
    	while(x)
    	{
    		int y=x%3;
    		s.push_back(y+'0');
    		x=x/3;
    	}
    	reverse(s.begin(),s.end());
    	cout << s << endl;
    	i++;
    }
}