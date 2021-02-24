#include<bits/stdc++.h>
using namespace std;
int rainwater(int arr[], int n)
{
	int result=0;
	int left_max=0,right_max=0;
	int low=0,high=n-1;
	while(low<=high)
	{
		if(arr[low]<arr[high])
		{
			if(arr[low]>left_max)
			left_max=arr[low];
			else
			result+= left_max-arr[low];
			low++;
		}
		else
		{
			if(arr[high]>right_max)
			right_max=arr[high];
			else
			result+=right_max-arr[high];
			high--;
		}
	}
	return result;
}
int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << rainwater(arr, n);
}
