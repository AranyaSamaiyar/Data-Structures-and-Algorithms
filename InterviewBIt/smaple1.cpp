#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A = 7;
	int a[A][A];
    int n =A, k=1;
    for(int begin =0,end = n-1;begin<=end;begin++,end--)
    {
        int i,j;
        for(j=begin;j<end;j++)
        {
            a[begin][j] = k;
            k++;
        }
        for(i=begin;i<end;i++)
        {
            a[i][j] = k;
            k++;
        }
        for(j=end;j>begin;j--)
        {
            a[i][j] = k;
            k++;
        }
        for(i=end;i>begin;i--)
        {
            a[i][j] = k;
            k++;
        }
        if(begin==end)
        a[begin][end] = k;
    }
    for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
}
