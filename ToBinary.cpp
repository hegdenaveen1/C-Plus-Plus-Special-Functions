//Converts given number to binary

int tobinary(int number)
{
  int remainder,binary=0,var=1;
  while(number>0)
  {    
  remainder=number%2;
  number=number/2;
  binary=binary+(remainder*var);
  var=var*10;
  } 
  return binary;
}