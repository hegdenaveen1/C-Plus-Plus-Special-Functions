//Returns the Numericl Difference between the first string from second string



string Difference(string a,string b)
{
	int la=a.length(),lb=b.length();
	string ans="";
	int dif=0,carry=0;
	int count=0;
	for(int i=1;i<=la&&i<=lb;i++)
	{
		
	if(a[la-i]>b[lb-i])
	{
		dif=a[la-i]-b[lb-i]-carry;
		carry=0;
		ans.push_back(dif+'0');
	}
	else
	{
		dif=a[la-i]-b[lb-i]+10-carry;
		carry=1;
		ans.push_back(dif+'0');
	}
	count++;
	}


	if(la>count)
	{
		for(int i=la-count-1;i>=0;i--)
		{
			if(a[i]-'0'>=carry)
				{
					dif=a[i]-'0'-carry;
					carry=0;
				}
			else
				{
					dif=a[i]-'0'+10-carry;
					carry=1;
				}
			ans.push_back(dif+'0');
			
		}
	}
	else if (lb>count)
	{
		for(int i=lb-count-1;i>=0;i--)
		{
			if(b[i]-'0'>=carry)
				{
					dif=b[i]-'0'-carry;
					carry=0;
				}
			else
				{
					dif=b[i]-'0'+10-carry;
					carry=1;
				}
			ans.push_back(dif+'0');
		}
	}


	reverse(ans.begin(),ans.end());
	while(ans[0]=='0')
	{
		ans.erase(ans.begin());
	}
	return ans;
	
}