//by zen 2014.04.21
//堆排序的实现
#include <stdio.h>
#include
void HeadAdjustFirst(int	a[],int s,int heap_size)
{
	//已知H.r[s..m]中记录的关键字除H.r[s].key之外均满⾜足堆的定义
    // 本函数调整H.r[s]的关键字,使H.r[s..m]成为⼀一个⼤大顶堆
    // (对其中记录的关键字⽽而⾔言)
    int temp = a[s];
    for(int i=s*2;i<heap_size;i*=2)
    {
    	if(a[i].key<a[i+1].key) 
    	{
    		i++;
    	}
    	if(temp>a[i].key) 
    	{
    		break;
    	}
    	a[s]=a[i];
    	s=i;
    }
    a[s]= temp;

}
void HeapAdjustSecond(int a[],int i,int heap_size)
{
	int left  = i*2+1;
	int right = i*2+2;
	int max = left;
	if(a[right]>a[left])
	{
		max=right;
	}
	if(a[i]<a[max])
	{
		int temp = a[i];
		a[i]= a[max];
		a[max]=temp;
        HeapAdjustSecond(a,max,heap_size);		
	}

}
void BuildHeap(int a[],int heap_size)
{
	for(int i=(heap_size-2)/2;i>=0;i--)
	{
		HeadAdjustFirst(a,i,heap_size);
	}

}
void HeapSort(int a[], int heap_size)
{
	BuildHeap(a,heap_size);
	for(int i=heap_size-1;i>=0;--i)
	{
		int temp = a[i];
		a[i]=a[0];
		a[0]=temp;
		HeadAdjustFirst(a,0,i)
	}
}
int main()
{
	const int heap_size = 10;
	int a[]={5,4,3,2,1,7,8,9,0};
	HeapSort(a,heap_size);
	return 0;
}