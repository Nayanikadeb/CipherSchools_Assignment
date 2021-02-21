#include<bits/stdc++.h>
using namespace std;
int mergesort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
          int right);
int inversioncount(int arr[], int n)
{
	int temp[n];
	return mergesort(arr, temp, 0,n);
}

int mergesort(int arr[], int temp[], int left,int right)
{
	int mid, inversion_count=0;
	while(right>left)
	{
		mid=(left+right)/2;
		inversion_count+=mergesort(arr, temp,left,mid-1);
		inversion_count+=mergesort(arr,temp,mid+1,right);
		inversion_count+=merge(arr,temp,left,mid+1,right);
		
	}
	return inversion_count;
	
}
int merge(int arr[], int temp[], int left, int mid, int right)
{
	int i, j, k;
    int count = 0;
 
    i = left; 
    j = mid; 
    k = right; 
    while((i<=mid-1)&& j<=k)
    {
    	if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
 
            
            count = count + (mid - i);
        }
	}
	while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    
    while (j <= right)
        temp[k++] = arr[j++];
 
    
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return count;
}

int main()
{
	int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = inversioncount(arr, n);
    cout << " Number of inversions are " << result;
    return 0;
}
