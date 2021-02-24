#include<bits/stdc++.h>
using namespace std;
void stockbuysell(int arr[], int n)
{
	int i=0;
	if(n==1)
	return ;
	while(i<n-1)
	{
		while((i<n-1)&& arr[i+1]<=arr[i])
		i++;
		if(i==n-1)
		break;
		int buy=i++;
		while((i<n)&& arr[i]>=arr[i-1])
		i++;
		int sell=i-1;
		cout<<"Buy on "<< buy<<endl;
		cout<<"Sell on "<< sell<<endl;
		
		
	}
	
}
int main()
{

    int price[] = { 100, 180, 260, 310, 40, 535, 695 };
    int n = sizeof(price) / sizeof(price[0]);
 
  
    stockbuysell(price, n);
 
    return 0;
}
