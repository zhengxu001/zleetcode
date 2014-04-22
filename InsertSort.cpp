#include <stdio.h>

void InsertSort(int a[],int n)
{
	int i, j;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			int temp = a[i];
			int j = i;
			while(temp < a[j])
			{
				a[j] = a[j-1];
				j--;
				if(j == 0)
				{
					break;
				}
			}
			a[j] = temp;
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int b[] = {10,9,8,7,6,5,4,3,2,1};
	InsertSort(b,10);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}