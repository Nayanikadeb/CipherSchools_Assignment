#include<bits/stdc++.h>
using namespace std;
bool twopeopleevermeet(int x1,int x2,int v1,int v2)
{
	if(x1>x2&&v1>=v2)
	return false;
	else if(x1<x2&&v1<=v2)
	return false;
	//making x1 always larger
	if(x1<x2)
	{
		swap(x1,x2);
		swap(v1,v2);
	}
	return((x1-x2)%(v1-v2)==0);
	
}
int main()
{
	int x1 = 5, v1 = 8, x2 = 4, v2 = 7; 
	if(twopeopleevermeet(x1,x2,v1,v2))
	cout<<"Yes";
	else
	cout<<"No";
}
