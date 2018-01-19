//Returns if a string contains another key string in order at random points
//eg. 
//goodbye
//bagpotodbqyeeje
//gives true



bool isstringinstring(const string &key,string &largestr)
{
	int la=key.length();
 	int lb=largestr.length();
 	int count=0;
 	for(int i=0;i<lb;i++)
 	{
 		if(key[count]==largestr[i])
 			count++;
 	}
 	if(count==la)
 		return true;
 	return false;
}