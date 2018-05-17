


// This function generates numbers in given base till the number n
void BaseGeneratorPrint(int n,int base)
{
    int i=1;
    while(i<=n)
    {
    	string s="";
    	int x=i;
    	while(x)
    	{
    		int y=x%base;
    		s.push_back(y+'0');
    		x=x/base;
    	}
    	reverse(s.begin(),s.end());
    	cout << s << endl;
    	i++;
    }
}