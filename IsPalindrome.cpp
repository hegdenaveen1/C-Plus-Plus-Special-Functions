//Returns if the input is a Palindrome or not


bool IsPalindrome(const string& str)
{
    if (str.empty())
        return false;

    int l=str.length();
    for(int i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
            return false;
    }
   
    return true;
}


bool ispalin(int n)
{
    int a=n,rem,rev=0;
    while(a)
    {
        rev=rev*10;
        rev=rev+(a%10);
        a=a/10;       
    }
    if(rev==n)
        return true;
    else
        return false;      
}
