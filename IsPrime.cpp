//Returns if the Number is Prime or non-Prime


bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  {
  	return (false);
  }
 for( int k = 1; 36*k*k-12*k < number;++k)
  	{
  	if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   		{
   			return (false);
   		}
	}
  return true;
}
