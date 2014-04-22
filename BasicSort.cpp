#include <iostream>
using namespace std;
//插入排序：
void InsertSort(SqList &L)
{
	int i, j;
	for(i=1;i<L.length();i++){
		if(L[i]<L[i-1]){
			int  temp = L[i];
			for(j=i;j>0&&temp<L[j];j--){
				L[j]=L[j-1];
			}
			L[j] = temp;
		}
	}

}
//冒泡排序
void BubbleSort(SeqList &L)
{
	int i, j;
	for(int i=0;i<n;++i)
		for(int j=n-1;j>i;--j){
			if(L[j]<L[j-1]){
				int temp =L[j];
				L[j]=L[j-1];
				L[j-1] =temp;
			}
		}
}
//选择排序
void SelectSort(SeqList &L)
{
	int i, j;
	for(i=0;i<n;i++){
		int temp =L[i];
		//选择未排序序列中最小值
		int min=i;
		for(j=i+1;j<n;j++)
			if(L[j]<L[min])
				min=j;
		L[i] = L[min] ;
		L[min] = temp;
	}
}	

