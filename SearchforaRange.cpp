vector<int> searchRange(int A[], int n, int target) {
    int begin = 0;
    int end = n-1;
    int index = -1;
    vector<int> res;
    while(begin < end)
    {
        int mid = (begin+end)/2;
        if(A[mid] == target)
	{
	    index = mid;
	    break;
	}
        else if(target < A[mid])
            end = mid-1;
        else
            begin = mid+1;
    }
    if(begin==end && A[begin]==target)
        index = begin;
    if(index == -1)
    {
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
    else
    {
        int p = index;
        while(p>=0&&A[p]==target)
	    p--;
        res.push_back(++p);
	while(p<n&&A[p]==target)
	    p++;
	res.push_back(--p);
        return res;
    }
}
