//Returns the number of factors of a given number




int NumberofFactors(int n)
{
	int x=0;
	int j=1;

	while(n>0 && n%2==0) 
	{
		n=n/2; x++; 
	}  
		j=j*(x+1);
 
	for(int i=3;i<=sqrt(n);i+=2)
	{
    	x=0;
    	
    	while(n>0 && n%i==0)
		{
			n=n/i;
			x++;
		}
	
		j=j*(x+1);
	}
 
	if(n>2) 
	{
		j=j*2;
	}
 
return j; 	
}
