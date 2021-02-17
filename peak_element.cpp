#include<bits/stdc++.h>
using namespace std;
int peakelement(int arr[],int low, int high, int n)
{
	int mid=(low+(high-low))/2;
	if(mid==0||arr[mid]>=arr[mid-1]&&mid==n-1||arr[mid]>=arr[mid+1])
	return mid;
	else if(mid>0&&arr[mid-1]>arr[mid])
	return peakelement(arr,low,mid-1,n);
	else if(mid>0&&arr[mid+1]>arr[mid])
	return peakelement(arr,mid+1,high,n);
}
int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int high=n-1;
    int low=0;
    cout << "Index of a peak point is "
         << peakelement(arr,low,high,n);
    return 0;
}
