#include<bits/stdc++.h>
using namespace std;
int search_sortedmatrix(int m[4][4],int n, int x)
{
	if(n==0)
	return -1;
	int smallest=m[0][0], largest=m[n-1][n-1];
	if(x<smallest||x>largest)
	return -1;
	int i=0,j=n-1;
	while(i<n &&j>=0)
	{
		if(x==m[i][j])
		{
		
		cout<<"Element found at "<<i <<" row and "<<j <<" column"<<endl;
		return 1;
	}
		else if(x>m[i][j])
		i++;
		else
		j--;
	}
	cout<<"Element not found"<<endl;
	return 0;
}
int main()
{
	int matrix[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    search_sortedmatrix(matrix, 4, 37);
 
}
