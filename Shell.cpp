#include <stdio.h>

void ShellSort(int a[],int n)
{
	int i, j, temp; 
	int gap = 0;
	while(gap<=n)
	{
		gap = gap*3+1;
	}
	 while (gap > 0) 
     {
         for ( i = gap; i < n; i++ )
         {
             j = i - gap;
             temp = a[i];             
             while (( j >= 0 ) && ( a[j] > temp ))
             {
                 a[j + gap] = a[j];
                 j = j - gap;
             }


             a[j + gap] = temp;
         }
         gap = ( gap - 1 ) / 3;
     }    
}

int main()
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	ShellSort(a,10);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}





