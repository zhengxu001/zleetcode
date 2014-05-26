int longestConsecutive(vector<int> &num)
{
    set<int> s1;
    int max=0;
    for(int i=0;i<num.size();i++)
    {
	if(s1.find(num[i]==s1.end()))
	{
	    s1.insert(num[i]);    
	}
    }
    for(int i=0;i<num.size();i++)
    {
	if(s1.find(num[i])!==s1.end())
	{
	    int  now= 1;
	    int c = num[i];
	    s1.earse(num[i]);
	    while(s1.find(c+1)!=s1.end())
	    {
		s1.erase(c+1);
		now+=1;
		c++;
	    }
	    c=num[i];
	    while(s1.find(c-1)!=s1.end)
	    {	
		s1.erase(c-1);
		now+=1;
		c--;
	    }
	    if(c>max)		
		max=c;
	}
    }
    return max;
}

