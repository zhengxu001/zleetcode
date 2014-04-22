#include <stdio.h>
void BubbleSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
		    {
			    int temp = a[j];
				a[j] = a[j-1];
			    a[j-1] = temp;
		    }
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int b[] = {10,9,8,7,6,5,4,3,2,1};
	BubbleSort(b,10);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}