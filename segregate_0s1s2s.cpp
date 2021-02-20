#include<bits/stdc++.h>
using namespace std;
int seg(int arr[], int n)
{
	int low=0, high=n-1, mid=0;
	while(mid<=high)
	{
		switch(arr[mid])
		{
			case 0: 
			{
				swap(arr[low++],arr[mid++]);
				break;
			}
			case 1:
				{
				
				mid++;
				break;
			}
			case 2:
				{
					swap(arr[mid],arr[high--]);
					break;
				}
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int arr[] = { 0, 1, 1,0,1,2,1,2,2,0,1,2, 0, 1, 2, 1, 2, 0, 0, 0, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    seg(arr, n); 
  
    return 0; 
}
