
//我们选取数组的第一个元素作为主元,每一轮都是和第一个元素比较
//大小,通过交换,分成大于和小于它的前后 两部分,再递归处理。
void QuickSort_1(int a[], int left, int right)
{
	int i,j;
	if(left<right)
	{
		i = left;
		j = right;
		a[0]=arr[i];
		while(i!=j)
		{
			while(a[j]>a[0]&& i<j)
			{
				j--;
			}
			if(i<j)
			{
				a[i] = a[j];
				i++;
			}
			while(a[i]<a[0] && i<j)
			{
				i++;
			}
			if(i<j)
			{
				a[j] = a[i];
				j--;
			}
		}
		a[i] = a[0];
		QuickSort(a,left,i-1);
		QuickSort(a,i+1,right); 
	}
}


//随机选基准数的快排
void QuickSort_1

