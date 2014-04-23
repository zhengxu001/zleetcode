#include <stdio.h>
double findMedianSortedArrays(int A[], int m, int B[], int n) 
{
    int C[m+n];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<m&&j<n)
    {
        if(A[i]<=B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }
    for(int p=i;p<m;p++)
    {
        C[k++]=A[p];
    }
    for(int q=j;q<n;q++)
    {
        C[k++]=B[q];
    }
    /*for(int h=0;h<m+n;h++)
    {
    	printf("%d\n",C[h] );
    }
    */
    if((m+n)%2==1)
    {
        return 1.0*C[(m+n)/2];
    }
    else
    {
        return (1.0*C[(m+n)/2-1]+1.0*C[(m+n)/2+1-1])/2.0;
    }
}

int main(int argc, char const *argv[])
{

	int a[]={1,2,3,4,5};
	int b[]={6,7,8,9,10};
	//1 1 2 2 3   3   4 4  5 5 6
	printf("%f<-",findMedianSortedArrays(a,5,b,5));
	/* code */
	return 0;
}