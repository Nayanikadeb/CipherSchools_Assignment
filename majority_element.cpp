#include<bits/stdc++.h>
using namespace std;
int majorityelement(int *arr,int n)
{
	int index=-1;
	sort(arr,arr+n);
	int count=1,max_element=-1, start=arr[0],flag=0,element;
	for(int i=0;i<n;i++)
	{
		if(start==arr[i])
		count++;
		else
		{
		
		start=arr[i];
		count=1;
	}
	if(count>max_element)
	{
		max_element=count;
		element=arr[i];
		if(max_element>n/2)
		{
			flag=1;
			break;
		}
	}
	}
	return(flag==1?element:-1);
}
int main()
{
	int arr[]={1, 1, 2, 0, 3, 5, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<majorityelement(arr,n);
	return 0;
}
