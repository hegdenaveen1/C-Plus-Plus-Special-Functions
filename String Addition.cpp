//Returns Sum of Large Numbers by taking them as strings 



string Sum(string a,string b)
{
	int la=a.length(),lb=b.length();
	
	string answer="";
	int addition,carry=0;
	int count=0;
	
	for(int i=1;i<=la&&i<=lb;i++)
	{
		addition=a[la-i]-'0'+b[lb-i]-'0'+carry;
		answer.push_back(addition%10+'0');
		carry=addition/10;
		count++;
	}


	if(la>count)
	{
		for(int i=la-count-1;i>=0;i--)
		{
			addition=a[i]-'0'+carry;
			answer.push_back(addition%10+'0');
			carry=addition/10;
		}
	}
	else if(lb>count)
	{

		for(int i=lb-count-1;i>=0;i--)
		{
			addition=b[i]-'0'+carry;
			answer.push_back(addition%10+'0');
			carry=addition/10;
		}
	}
	

	if (carry)
        answer.push_back(carry+'0');

	reverse(answer.begin(),answer.end());
	
	return answer;
}
