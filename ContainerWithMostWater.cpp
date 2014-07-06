int maxArea(vector<int> &height) {
    int start = 0;
    int end = hetght.size()-1;
    int MaxArea = 0;
    while(start<end)
    {
	int low = height[start]<=height[end]?height[start]:height[end];
	if(low*(end-start)>MaxArea)
	    MaxArea = low*(end-start);
	if(heigit[start]<height[end])
	start++;
	else 
	end--;
    }
    return MaxArea;
}
    
