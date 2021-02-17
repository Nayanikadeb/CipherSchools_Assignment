#include<bits/stdc++.h>
using namespace std;

int search(int matrix[4][4], int n, int x)
{
    if (n == 0)
        return -1;
   
    int smallest = matrix[0][0], largest = matrix[n - 1][n - 1];
    if (x < smallest || x > largest)
        return -1;
   
   
    int i = 0, j = n - 1; 
    while (i < n && j >= 0) 
    {
        if (matrix[i][j] == x) 
        {
            cout << " Found at "
                 << i << ", " << j;
            return 1;
        }
        if (matrix[i][j] > x)
            j--;
       
 
        else
            i++;
    }
 
    cout << " Element not found";
    return 0;
}
int main()
{
    int m[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    search(m, 4, 29);
 
    return 0;
}
