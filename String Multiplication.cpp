//Returns the Product of Large numbers in the form of a string




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
	

	while (carry)
        {
        	answer.push_back(carry%10 +'0');
        	carry=carry/10;
        }

	reverse(answer.begin(),answer.end());
	
	return answer;
}

string Multiply(string a, string b)
{
	int la=a.length();
	int lb=b.length();
	int count=0;
	int mult;
	int carry=0;
	
	string ans="";

	for(int i=la-1;i>=0;i--)
	{
		string multi="";
		for(int j=lb-1;j>=0;j--)
		{
			mult=(a[i]-'0')*(b[j]-'0')+carry;
			multi.push_back(mult%10+'0');
			carry=mult/10;
		}
		while(carry)
			{
				multi.push_back(carry%10+'0');
				carry=carry/10;
			}
		reverse(multi.begin(),multi.end());

		for(int k=0;k<count;k++)
			multi.push_back('0');

		count++;

		ans=Sum(ans,multi);

		carry=0;
	}
	return ans;
}
