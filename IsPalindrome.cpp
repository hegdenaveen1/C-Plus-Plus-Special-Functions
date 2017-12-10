//Returns if the string is a Palindrome or not


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