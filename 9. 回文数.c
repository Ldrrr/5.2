bool isPalindrome(int x)
{
	if(x<0) return false;
	long t=x,s=0;
	while(t)
	{
		s=10*s+t%10;
		t=t/10;
	}
	if(x==s) return true;
	else return false;
}
