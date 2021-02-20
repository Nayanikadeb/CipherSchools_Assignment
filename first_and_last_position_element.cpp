#include<bits/stdc++.h>
using namespace std;
int first(int arr[], int low, int high, int x, int n)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		if((mid==0 || x > arr[mid-1]) && arr[mid]==x)
		return mid;
		else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
	}
	return -1;
	
}
int last(int arr[], int low, int high, int x, int n)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		if((mid==n-1||x<arr[mid+1])&&arr[mid]==x)
		return mid;
		else if(x<arr[mid])
		return last(arr, low, (mid-1), x, n);
		else
		return last(arr, (mid+1), high, x, n);
	}
	return -1;
	
}
int main()
{
	int ar[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(ar) / sizeof(int);
 
    int x = 2;
   cout<<"First occurrence : "<<first(ar, 0, n - 1, x, n)<<endl;
           
    cout<<"Last occurrence : "<<last(ar, 0, n - 1, x, n);
 
          
    return 0;
}
