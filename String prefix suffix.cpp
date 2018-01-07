//Returns if the string is suffix or prefix of each other based on function selected

bool issuffix(string original,string suffix)
{
	int lo=original.length();
	int ls=suffix.length();
	for(int i=1;i<=lo&&i<=ls;i++)
	{
		if(original[lo-i]!=suffix[ls-i])
			{
				return false;
			}
	}
	return true;
}

bool isprefix(string original,string prefix)
{
	int lo=original.length();
	int lp=prefix.length();
	for(int i=0;i<lo&&i<lp;i++)
	{
		if(original[i]!=prefix[i])
		{
			return false;
		}
	}
	return true;
}
