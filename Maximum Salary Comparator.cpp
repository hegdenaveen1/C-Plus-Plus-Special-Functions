//Comparator Function for returning Max Salary arrangeable out of bits of integer strings/// 


bool MaxSalary(string a,string b)
{
int x,y;
stringstream s1,s2;
s1 << a << b;
s2 << b << a;
s1 >> x;
s2 >> y;
if(y>=x)
  return true;
else
  return false;
}
